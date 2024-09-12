//swap

#include <stdio.h>
#include <stdlib.h>

void swap(int*ptA,int*ptB);

int main(){
	
	int a=5,b=10;
	printf("a=%d,b=%d\n",a,b);
	swamp( &a,&b);
	printf("a=%d kai b=%d\n",a,b);
	
	
	
	return 0;
}


void swamp(int*ptA,int*ptB){
	int k;
	k=*ptA;
	*ptA=*ptB;
	*ptB=k;
    printf("a=%d kai b=%d\n",*ptA,*ptB);
}
