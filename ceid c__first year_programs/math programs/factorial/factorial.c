//factorial calc

#include<stdio.h>

int factorial(int num);
   int z;
int main(){
   
   int y,n,num;
   
   printf("dose arithmo:");
   scanf("%d",&num);
   printf("\n");
   
   y=factorial(num);
   
   printf("%d!=%d",num,y);

}


int factorial(int num){
	
	
	
	if(num==1)
	{
	  return 1;
	}

    else
	{
    	z=factorial(num-1);
    	return num*z;
	}
}

