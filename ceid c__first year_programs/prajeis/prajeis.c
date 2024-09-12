//prajeis

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char menu(char choice);
double get_numbers();

double num[2];

int main() {
	char choice;
	char y;
 
	while(y!='x'){
		
	    y=menu(choice);
	    printf("\n");
	    
	    if(y=='x')
	    break;
	    
	    switch(y){
		case '+':
			get_numbers(num[0],num[1]);
			printf("the result is %lf\n\n",num[0]+num[1]);
			break;
	    case '-':
			get_numbers(num[0],num[1]);
			printf("the result is %lf\n\n",num[0]-num[1]);
			break;
	    case '/':
			get_numbers(num[0],num[1]);
			if(num[1]==0){
				printf("h diairesh me 0 den ginetai\n\n");
				break;
			}
			printf("the result is %lf\n\n",num[0]/num[1]);
			break;
		case '*':
			get_numbers(num[0],num[1]);
			printf("the result is %lf\n\n",num[0]*num[1]);
			break;
		case 'l':
		  get_numbers(num[0],num[1]);
		  printf("o dekadikos logarithmos tou %lf einai o %lf kai toy % lf o %lf\n\n",num[0],log10(num[0]),num[1],log10(num[1]));
		  break;
		default:
			printf("unkown command\n\n");
			break;
	} 
	}
	return 0;
}

char menu(char choice){
	printf("the menu:\n");
		printf("+,-,*,/ kai l einai to log10(x)\nkai to x to teleionei\n");
	    printf("dose toys arithmous afoy kaneis epilogh\n\n");
	    printf("enter the choice:");
	    fflush(stdin);
	    scanf("%c",&choice);
	    return choice;
	}
	
double get_numbers(){
	printf("give me 2 numbers:");
	scanf("%lf%lf",&num[0],&num[1]);
}
