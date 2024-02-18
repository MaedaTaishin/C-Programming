#include <stdio.h>
#include <string.h>
 
int main(void){

  	char str[100];
  	int len;
  	int max = 0; 
 
  	printf("Enter any String:  ");
  	scanf("%s", str);
  	
  	len = strlen(str);
    int freq[200] = {0};
  	
  	for(int i=0; i<len; i++){
  		freq[str[i]]++;
	}
  		
  	for(int i=0; i<200; i++){
		if(freq[i]>freq[max]){
			max = i;
		}
	}
	printf("Maximum occuring character is '%c', occured %d times\n", max, freq[max]);
	
  	return 0;
}