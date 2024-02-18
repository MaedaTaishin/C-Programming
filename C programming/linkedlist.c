#include <stdio.h>
#include <stdlib.h>

struct node{
    int num1;
    struct node* next;
};

typedef struct x{
    struct node* head;
    int num2;
} LinkedList;

void appendItem(LinkedList* list, int value){
    struct node *new;
    new = (struct node*) malloc(sizeof(struct node));
    new->num1 = value;
    if(list->head == NULL){
        list->head = new;
        list->num2 = 0;
    }else{
        struct node* temp;
        temp = list->head;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = new;
    }
    list->num2++;
}

int countItems(LinkedList* list){
    return list->num2;
}

int insertItem(LinkedList* list, int index, int value){
    if(index > list->num2){
        return -1;
    }else{
        struct node *new;
        new = (struct node*) malloc(sizeof(struct node));
        new->num1 = value;
        struct node *before;
        struct node *after;
        before = list->head;

        for(int i=0; i<index - 1; i++){
            before = before->next;
        }
        if(index == 0){
            list->head = new;
            list->head->next = before;
        }else{
            after = before->next;
            before->next = new;
            new->next = after;
        }
        list->num2++;
        return 1;
    }
}

int removeItem(LinkedList* list, int index){
    if(index > list->num2-1){
        return -1;
    }else{
        struct node *before;
        struct node *spot;
        struct node *after;
        before = list->head;
        for(int i=0; i<index-1; i++){
            before = before->next;
        }
        if(index == 0){
            spot = before->next;
            after = spot->next;
            list->head = after;
        }else{
            spot = before->next;
            after = spot->next;
            before->next = after;
        }
        free(spot);
        list->num2--;
        return 1;
    }
}

void dumpItems(LinkedList* list){
    struct node *temp;
    temp = list->head;
    printf("%d", temp->num1);
    while(temp->next != NULL){
        temp = temp->next;
        printf("%d", temp->num1);
    }
    printf("\n");
}

int getItem(LinkedList* list, int index){
    if(index > list->num2-1){
        return -1;
    }else{
        struct node *spot;
        spot = list->head;
        for(int i=0; i<index; i++){
            spot = spot->next;
        }
        return spot->num1;
    }
}

void clearItems(LinkedList* list){
    int size = list->num2;
    int temp;
    for(int i=0; i<size; i++){
        temp = removeItem(list, 0);
    }
}

int main(void){
    LinkedList list; 
    appendItem(&list, 1); 
    appendItem(&list, 5); 
    appendItem(&list, 4); 
    appendItem(&list, 7);

    int count = countItems(&list); 
    printf("%d\n", count); 
    dumpItems(&list);

    printf("%d\n", insertItem(&list, 2, 3)); 
    printf("%d\n", insertItem(&list, 100, 3)); 
    dumpItems(&list);

    printf("%d\n", removeItem(&list, 1)); 
    printf("%d\n", removeItem(&list, 100)); 
    dumpItems(&list);

    printf("%d\n", getItem(&list, 2)); 
    printf("%d\n", getItem(&list, 100));

    clearItems(&list);
    printf("%d\n", countItems(&list));
    return 0;
}