//diadikh

#include<stdio.h>
#include<math.h>

/*declare the miracles*/
void miracle1(double x1,int a,int b,int c,double vodia);
void miracle2(double x2,int a,int b,int c,double vodia);


int main()
{
	
	int a,b,c;
	double vodia;
    double d;
    double x1,x2;

	
	printf("dose statheres:");
	scanf("%d%d%d",&a,&b,&c);
	printf("h synarthsh einai h %dx^2+%dx+%d",a,b,c);
	printf("\n");
	printf("na pas math lab return 0; \n");
	vodia=(b*b)+(-1*4*a*c);
	
	if(vodia<0){
		printf("vourlo den ginetai");
		return 0;
	}else if(vodia==0){
		miracle1(x1,a,b,c,vodia);
		printf(" kai einai diplh");
		}
	else{
		printf("oi lyseis einai\t");
		miracle1(x1,a,b,c,vodia);
		printf(",");
		miracle2(x2,a,b,c,vodia);
		
	}
  
  return 0;
}




// the miracles
void miracle1(double x1,int a,int b,int c,double vodia){

   x1=(-1*b+sqrt(vodia))/(2*a);
   
   printf("%lf",x1);
   
}


void miracle2(double x2,int a,int b,int c,double vodia){

   x2=(-1*b-sqrt(vodia))/(2*a);
   
   printf("%lf",x2);
   
}
