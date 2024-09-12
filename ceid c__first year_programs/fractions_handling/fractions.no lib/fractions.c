//fractions

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* pare arithmo ekfraseon
    oso arithmos epanalhceon mikroteros apo arithmo ekfraseon{
	pare 2 klasmata
	pare telesth
	typose to aplopoihmeno apotelesma ths prajhs
	} */

char menu(char choice);
int appl(double*fnum,double*fdiv);
void koinos(double*num1,double*div1,double*num2,double*div2,double*fdiv,double*fnum);
void get_fractions(double*num1,double*num2,double*div1,double*div2);

int main() {

	//arithmos ekfraseon
	int ek;
	
	printf("dose arithmo ekfraseon:");
	scanf("%d",&ek);
	
	//h loupa
	int i;
	char choice;
	char y;
	double num1,num2,fnum,div1,div2,fdiv;

	for(i=0;i<ek;i++){
	//menu
    y=menu(choice);
	printf("\n");
	
	get_fractions(&num1,&div1,&num2,&div2);
	
	//elegxos 0 ston paronomasth
	if(div1==0||div2==0){
		printf("den ginete 0 paronomasth");
		break;
	}
	
	//prajeis
	switch(y){
	case'+':
		koinos(&num1,&div1,&num2,&div2,&fnum,&fdiv);
	    fnum=num1+num2;
    	fdiv=div1;
    	appl(&fnum,&fdiv);
	    printf("apotelesma:%lf/%lf\n\n",fnum,fdiv);
	    break;
	case'-':
		koinos(&num1,&div1,&num2,&div2,&fnum,&fdiv);
	    fnum=num1-num2;
    	fdiv=div1;
    	appl(&fnum,&fdiv);
	    printf("apotelesma:%lf/%lf\n\n",fnum,fdiv);
	    break;
	case'*':
		fnum=num1*num2;
		fdiv=div1*div2;
		appl(&fnum,&fdiv);
		printf("apotelesma:%lf/%lf\n\n",fnum,fdiv);
		break;
	
	case'/':
		fnum=num1*div2;
		fdiv=div1*num2;
		appl(&fnum,&fdiv);
		printf("apotelesma:%lf/%lf\n\n",fnum,fdiv);
		break;
		
	default:
		printf("invalid choice\n");
	}
	}
	return 0;
}

char menu(char choice){
	
	printf("exeis tis ejeis epiloges:+,-,*,/\n");
	printf("choice:");
	fflush(stdin);
	scanf("%c",&choice);
	return choice;
}

int appl(double*fnum,double*fdiv){
	double mult,temp,impos;
	mult=*fdiv;
	impos=*fnum;
	while (mult != 0.0) {
        temp =mult;
        mult = fmod(impos,mult);
        impos = temp;
    }
    *fnum=*fnum/impos;
    *fdiv=*fdiv/impos;
    return mult;
}

void koinos(double*num1,double*div1,double*num2,double*div2,double*fdiv,double*fnum){
	*num2*=*div1;
	*div1*=*div2;
	*num1*=*div2;
}

void get_fractions(double*num1,double*div1,double*num2,double*div2){
	
	printf("give me the first fraction\n");
	scanf("%lf",&*num1);
	printf("/");
	scanf("%lf",&*div1);
	printf("give me the second fraction\n");
	scanf("%lf",&*num2);
	printf("/");
	scanf("%lf",&*div2);
}
