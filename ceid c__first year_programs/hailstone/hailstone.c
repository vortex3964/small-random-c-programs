//hailstone

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int number;
	printf("dose arithmo:");
	scanf("%i", &number);
	
	//the loop
	while(number!=1){
     
	 if(number%2==0){
		printf("%i,",number);
		number=number/2;
		}
	
	else{
	printf("%i,",number);
	number=3*number+1;}
	
	}
	
	//apotelesma
	
	printf("%i",number);
	
	
	return 0;
}
