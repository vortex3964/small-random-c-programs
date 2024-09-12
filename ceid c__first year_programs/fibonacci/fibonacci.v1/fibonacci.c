//fubonacci sequence

#include<stdio.h>
#include<stdlib.h>

int main(){
   
   int i=1;
   int prev=0;
   int next=1;
   int sum;
   int index;
   
    printf("how many numbers do you want:");
    scanf("%i",&index);
   
    while(i<=index){
    	
    	if(i<=1){
    		
    	printf("%i,",i);
    	i++;
    		
    		
    		
		}
    	else{
    		sum=prev+next;
    		printf("%i,",sum);
    		
			prev=next;
			next=sum;
    		
    		i++;
    		
		}
    	
    	
    	
    	
	}
   
   
   
   printf("........");
   
     return 0;
 }
 
 
 
 
 
