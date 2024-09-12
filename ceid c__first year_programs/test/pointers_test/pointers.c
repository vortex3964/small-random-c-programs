//pointers

#include <stdio.h>
#include <stdlib.h>
#define n 4
int main(){
	int x;
	int*ptr;
	ptr=&x;
	*ptr=5;
	
	printf("int=%d\n",sizeof(int));
	printf("char=%d\n",sizeof(char));
	printf("double=%d\n",sizeof(double));
	printf("float=%d\n",sizeof(float));
	printf("long double=%d\n",sizeof(long double));
	printf("long =%d\n",sizeof(long ));
	printf("short =%d\n",sizeof(short ));
    printf("short int=%d\n\n\n",sizeof(short int));
	
	x=5;
	printf("x=%d\t*ptr=%d\tptr=%d\t&x=%d\n",x,*ptr,ptr,&x);
	*ptr=9;
	printf("x=%d\t*ptr=%d\tptr=%d\t&x=%d\n",x,*ptr,ptr,&x);
	x=9;
	printf("x=%d\t*ptr=%d\tptr=%d\t&x=%d\n\n\n",x,*ptr,ptr,&x);
	
	int pin[n];
	int i;
	for(i=0;i<n;i++){
		pin[i]=2*i;
		printf("\nstoixeio:%d arithmos:%d einai sthn dieyuynsh:%d\n\n\n\n",i,pin[i],&pin[i]);
	}
	double*point;
	double pinakas[100];
	point=pinakas;
	printf("h dieyuynsh prin thn prajh:%d\n",point);
	point+=2;
	printf("h dieyuynsh meta thn prajh:%d\n",point);
	
	
	return 0;
}
