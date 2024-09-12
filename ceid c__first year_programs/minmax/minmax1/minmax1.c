//minmax v1

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

double  find_max(double current,double max);
double find_min(double current,double min);
double min,max,middle,current;

	int main() {
	
	int pl,i;
	
	printf("give plhthos:");
	scanf("%d",&pl);
	
	double min,max,middle,current;
	
	min=(" %.10e\n", FLT_MAX);
	max=(" %.10e\n", FLT_MIN);
	
	printf("give numbers:");

	for(i=1;i<=pl;i++)
	{
		
		scanf("%lf",&current);
		max=find_max(current,max);
		min=find_min(current,min);
	}
	
	printf("o megalyteros einai o %lf kai o mikroteros o %lf",max,min);
	return 0;
}
	
	double find_max(double current,double max){
	    
	    
		if(current>=max){
			max=current;
		}
	    return max;
	}
	
double find_min(double current,double min){
    if(current<=min){
			min=current;
		}
    
    return min;
}



	
	
		

