#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	
	double num1,sum;
	int index;
	int i=0;
	
	printf("dose plythos:");
	scanf("%d",&index);
	
	if(index==0)
	{
		printf("dokimase pali");
		return 0;
	}
	
	printf("give me the numbers:\n");
	
	while(i<index)
	{
		
		scanf("%lf",&num1);
		sum=sum+num1;
		i++;
		}
		
		printf("the average is %lf",sum/index);
	
	
	
	return 0;
}
