//fractionw with struct and library

#include <stdio.h>
#include "i2p.h"
#include <math.h>
#include <stdlib.h>

Expression readExpression(void);
void adition(Expression fra);
void subtraction(Expression fra);
void multiplication(Expression fra);
void division(Expression fra);
int gcdf(Expression fra);

int main(){
	int ek,i;
	Expression fra;
	printf("dose arithmo ekfraseon:\n");
	scanf("%d",&ek);
// the loop
   for(i=0;i<ek;i++){
  fra=readExpression();
   int check=0;
   //elegxos 0 ston paronomasth
	if(fra.op1.par==0||fra.op2.par==0){
	printf("den ginete 0 paronomasth\n");
	check++;
	}
	//epiloges
   	if(check==0){
	switch(fra.operator){
   		case '+':
   		adition(fra);
		break;	
   		case '-':
   		subtraction(fra);
   		break;
   		case '*':
   		multiplication(fra);
   		break;
   		case '/':
   		division(fra);
   		break;
   		default:
   		printf("i dont understand\n");
   		break;
	   }
    }
   }
return 0;
}

Expression readExpression(void){
	fflush(stdin);
	Expression fra;
	printf("exeis tis ejeis epiloges:+,-,*,/\n");
	printf("choice:\n");
	scanf("%c",&fra.operator);
	printf("give me the first fraction\n");
	scanf("%d",&fra.op1.ar);
	printf("/\n");
	scanf("%d",&fra.op1.par);
	printf("give me the second fraction\n");
	scanf("%d",&fra.op2.ar);
	printf("/\n");
	scanf("%d",&fra.op2.par);
	return fra;
}

int gcdf(Expression fra){
   int temp,x,gcd;
   x=fra.op1.ar;
   gcd=fra.op1.par;
   while(x!=0){
   	temp=x;
   	x=gcd%x;
   	gcd=temp;
	}
	return gcd;
}

void adition(Expression fra){
   printf("the adition of %d/%d %c %d/%d is:",fra.op1.ar,fra.op1.par,fra.operator,fra.op2.ar,fra.op2.par);
   fra.op1.ar*=fra.op2.par;
   fra.op2.ar*=fra.op1.par;
   //final product
   fra.op1.par*=fra.op2.par; 
   fra.op1.ar+=fra.op2.ar;
  //gcd
   int gcd;
   gcd=gcdf(fra);
  
   fra.op1.par/=gcd;
   fra.op1.ar/=gcd;
   printf("%d/%d\n\n",fra.op1.ar,fra.op1.par);
}

void subtraction(Expression fra){
   printf("the subtraction of %d/%d %c %d/%d is:",fra.op1.ar,fra.op1.par,fra.operator,fra.op2.ar,fra.op2.par);
   fra.op1.ar*=fra.op2.par;
   fra.op2.ar*=fra.op1.par;
   //final product
   fra.op1.par*=fra.op2.par; 
   fra.op1.ar-=fra.op2.ar;
   //gcd
   int gcd;
   gcd=gcdf(fra);
   fra.op1.par/=abs(gcd);
   fra.op1.ar/=abs(gcd);
   
   printf("%d/%d\n\n",fra.op1.ar,fra.op1.par);
}

void multiplication(Expression fra){
   printf("the multiplication of %d/%d %c %d/%d is:",fra.op1.ar,fra.op1.par,fra.operator,fra.op2.ar,fra.op2.par);
   fra.op1.ar*=fra.op2.ar;
   fra.op1.par*=fra.op2.par;
   //gcd
   int gcd;
   gcd=gcdf(fra);
   fra.op1.par/=abs(gcd);
   fra.op1.ar/=abs(gcd);
   
   printf("%d/%d\n\n",fra.op1.ar,fra.op1.par);
}

void division(Expression fra){
   int check=0;
   if(fra.op2.ar==0){
   	printf("0 paronomasth\n\n");
   	check++;
   }
   if(check==0){
   printf("the division of %d/%d%c%d %c %d is:",fra.op1.ar,fra.op1.par,fra.operator,fra.op2.ar,fra.op2.par);
   fra.op1.ar*=fra.op2.par;
   fra.op1.par*=fra.op2.ar;
   //gcd
   int gcd;
   gcd=gcdf(fra);
   fra.op1.par/=abs(gcd);
   fra.op1.ar/=abs(gcd);
   
   printf("%d/%d\n\n",fra.op1.ar,fra.op1.par);}
}
