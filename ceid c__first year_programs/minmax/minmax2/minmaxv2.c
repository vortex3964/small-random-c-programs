//min max v2

#include <stdio.h>
#include <stdlib.h>


double elegxos_max(double current,double max);
double elegxos_min(double current,double min);
	double num,min,max,current;

int main() {
	
	int pl,i;

    printf("give plhthos:");
	scanf("%d",&pl);
	
	if(pl<2)
	{
	printf("oxi arketa stoixeia");
	return 0;
    }
	
	double numbers[pl];
   
   //eisodos arithmon
   for(i=0;i<pl;i++)
   {
   	printf("enter the number:");
   	scanf("%lf",&numbers[i]);
    }
   	
min=max=numbers[0];
	
	//elegxos
	for(i=0;i<pl;i++)
	{
	 current=numbers[i];
	 max=elegxos_max( current, max);
	 min=elegxos_min(current, min);
	}
	
	printf("o megalyteros einai o %lf kai o mikroteros o %lf",max,min);
	return 0;
}


double elegxos_max(double current,double max){
    if(current>max){
	 max=current;}
    return max;
    
}

double elegxos_min(double current,double min){
    if(current<min){
	min=current;}
    return min;
}


	


