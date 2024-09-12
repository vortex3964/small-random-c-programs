//divisors


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int num_div;
	int num;
	int div=1;
	
	printf("dose arithmo:");
	scanf("%i",&num);
	
	if(num==0){
		printf("oloi oi akeraioi");
	}
	
	while(div<=num){
		
		if(num%div==0){
		    num_div++;
			}
		div++;
		}
		
		if(num_div==2){
			printf("o %i einai protos",num);
			return 0;
		}
		
		div=1;
		
		while(div<=num)
		{
		  if(num%div==0){
			num_div++;
			printf("%i,",div);
			}
		div++;
		}
		return 0;
}
