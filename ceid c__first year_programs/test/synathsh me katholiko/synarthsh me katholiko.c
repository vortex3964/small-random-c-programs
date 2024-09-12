//test
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void f1();
void f2();
int x;

main() {
int a=0;

x=5;

printf("\nmain:a=%d,x=%d",a,x);
f1();
printf("\nmain:a=%d,x=%d",a,x);
f2();
printf("\nmain:a=%d,x=%d",a,x);

}


void f1(){
	int a=2,x=0;
	printf("\nf1:a=%d,x=%d",a,x);
}

void f2(){
	int a=8;
	 x=7;
	printf("\nf2:a=%d,x=%d",a,x);
}
