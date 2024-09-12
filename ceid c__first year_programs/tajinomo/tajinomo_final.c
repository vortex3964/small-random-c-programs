//tajhnomo final

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define grammes 30
#define steiles 180

/*synarthseis*/
char menu(char choice,int*eisagei);
char menuwu(char letter);
int add_word(int*count,char(*ptrlist)[steiles],int*eisagei);
void print_all(int*count,char(*ptrlist)[steiles]);
void avg(int*count,char(*ptrlist)[steiles]);
void mik_mlej(int*count,char(*ptrlist)[steiles],int current,int min);
void max_mlej(int*count,char(*ptrlist)[steiles],int current,int max);
void eisagogh(int*count,char(*ptrlist)[steiles]);
void sortInc4String(char(*ptrlist)[steiles],int*choice);
void sortDec4String(char(*ptrlist)[steiles],int*choice);
void search(char(*ptrlist)[steiles],int*count);

int main() {
	char list[grammes][steiles];
	char(*ptrlist)[steiles]=list;
	int count=0;
	int eisagei=0;
	int max,min,average,current;
	int i;
	//gia to c
	int previous, maxNumber, maxCount,mincount, currentCount;
	printf("h lista xoraei mexri 30 lejeis\n");
	char choice;
	char y;
	
	while(y!='x'){
    	y=menu(choice,&eisagei);
     if(eisagei==1 || y=='+'){
	 switch(y){
        case'+':
     	  add_word(&count,ptrlist,&eisagei);
     	  break;
     	  case'p':
     	  print_all(&count,ptrlist);
     	  break;
     	case'/':
     	   avg(&count,ptrlist);
     	   break;
     	   case'm':
     	   max_mlej(&count,ptrlist,current,max);
		   break;
     	   case'0':
     	   mik_mlej(&count,ptrlist,current,min);
     	   break;
     	case'c':
     	   eisagogh(&count,ptrlist); 
     	   break;
     	case'1':
     		sortInc4String(ptrlist,&count);
     		break;
     	case'2':
     		sortDec4String(ptrlist,&count);
     		break;
     	case's':
     		search(ptrlist,&count);
     		break;
     	 case'x':
		 	break;
     	default:
     		printf("i dont understand\n");
     		break;
	 }}
	 else if(eisagei==0){
	 	printf("adeios pinakas parakalo prin kanete to otidipote allo balte lejeis ston pinaka\n\n");
	 }
	}
 return 0;
}

char menu(char choice,int*eisagei){
	printf("\n");
	printf("+,adds a word\np,prints out all the current words\n/,dinei meso mikos lhjhs\nc,eisagei xarakthra\n0,briskei to elaxisto mhkos lejhs\nm,megisto mikos lejis");
	printf(",to 1 tajinomei ton pinaka kata ayjousa seira,to 2 tajinomei ton pinaka kata sthinousa\n");
	printf("to s psaxnei gia mia lejh,");
	printf("to x kleinei to programa\nenter your choice:\n");
	fflush(stdin);
	scanf("%c",&choice);
	return choice;
}

char menuwu(char letter){
	printf("\n2,dinei ton meso arithmo emphaniseon ana lejh\n3,lejh me megalytero arithmo emphaniseon\n4,lejh me ton mikrotero arithmo emphaniseon\n5,synoliko arithmo emphaniseon\n");
    printf("6,dinei to max kai min arithmo epanalhpseon\n");
	printf("enter the letter you want:\n");
	fflush(stdin);
	scanf("%c",&letter);
	return letter;
}

int add_word(int*count,char(*ptrlist)[steiles],int*eisagei)
{
if(*count==grammes){
   	printf("you have reatched the word limit\n");
    return 0;
	}
   int i,syn;
   int fores=0;
   syn=grammes-*count;
   printf("how many words do you want to add:");
   scanf("%d",&fores);
   if(fores==0){
   	(*eisagei)=0;
   }
   else if(fores<=syn){
   	for(i=0;i<fores;i++){
   printf("enter your word\n");
   scanf("%s", ptrlist[*count]);
   (*count)++;
   (*eisagei)=1;
   }}
   else if(fores>syn){
   	printf("den exeis arketo xoro\n");
   }
   syn=grammes-*count;
   printf("sou menoun %d lejeis  mexri na gemisei o pinakas\n",syn);
   return 1;
}

void print_all(int*count,char(*ptrlist)[steiles]){
	int i;
	printf("you entered %d/%d you have %d words left\n",*count,grammes,grammes-*count);
     		for(i=0;i<*count;i++) printf("%d.%s\n",i+1, ptrlist[i]);
}

void avg(int*count,char(*ptrlist)[steiles]){
	int average,current;
	average=0;
	int i;
    for(i=0;i<*count;i++){
     current=strlen(ptrlist[i]);
     average+=current;
	 }
    printf("meso mikos lejis einai %d\n\n",average/ *count);
}


void mik_mlej(int*count,char(*ptrlist)[steiles],int current,int min){
	int i;
	if(*count==0){
		printf("elaxisto mikos lejis einai 0\n");
	}
	else{
	min=strlen(ptrlist[0]);
     	for(i=1;i<*count;i++){
        current=strlen(ptrlist[i]);
     	if(current<min) min=current;
     	}
printf("elaxisto mikos lejis einai %d\n\n",min);
}
}


void max_mlej(int*count,char(*ptrlist)[steiles],int current,int max){
	int i;
		if(*count==0){
		printf("elaxisto mikos lejis einai 0\n");
	}
	else{
	max=strlen(ptrlist[0]);
     	for(i=1;i<*count;i++){
     	current=strlen(ptrlist[i]);
   		if(current>max) max=current;
		   	}
	printf("megisto mikos lejis einai %d\n\n",max);}
}

void eisagogh(int*count,char(*ptrlist)[steiles]){
	char z;
	int choice2;
	char letter;
	int i,j;
	int previous, maxNumber, maxCount,mincount, currentCount,current;
	z=menuwu(letter);
     	   printf("enter your choice of number:\n");
     	   scanf("%d",&choice2);
     	   if(choice2==2){
     	   		int lettercount = 0;
     	   	 for (i = 0; i< *count; i++) {
          for(j = 0; j < strlen(ptrlist[i]); j++) {
            if (ptrlist[i][j] == z ) lettercount++;}
     	   }
			printf("o mesos arithmos emphaniseon ana lejh einai %d (to apotelesma einai me fysikoys arithmous)",lettercount/ *count);
			}
			
     	   if(choice2==3){
     	  int maxcount,index;
     	   	int i,j;
     	   	int current,check; 
		maxcount=check=0;
		for(i=0;i<*count;i++){
     	   		current=0;
     	   		for(j=0;j<strlen(ptrlist[i]);j++){
     	   		if(ptrlist[i][j]==z){
     	   			current++;
					}	
				}
				if(current!=0 && check==0 ){
				 maxcount=current;
				 index=i;
				 check++;
				}
				if(maxcount<=current && check==1 && current!=0){
					mincount=current;
					index=i;
				}}
    if (maxcount!= 0 ) {
        printf("h lejh pou mfanizei to gramma %c tiw perisoteres fores einai h: %s\n", z, ptrlist[index]);
    } else {
        printf("den yparxei to gramma\n");
    }}
			
     	   if(choice2==4){
     	   	int mincount,index;
     	   	int i,j;
     	   	int current,check;
     	   	mincount=check=0;
     	   	for(i=0;i<*count;i++){
     	   		current=0;
     	   		for(j=0;j<strlen(ptrlist[i]);j++){
     	   		if(ptrlist[i][j]==z){
     	   			current++;
     	   			
					}	
				}
				if(current!=0 && check==0){
				 mincount=current;
				 index=i;
				 check++;
				}
				if(mincount>=current && check==1 && current!=0){
					mincount=current;
					index=i;
				}
				}
				printf("%d",mincount);
         if(mincount!=0){
		 
        printf("h lejh pou mfanizei to gramma %c tiw ligoteres fores einai h %s\n", z, ptrlist[index]);}
        else{
        	printf("den yparxei to gramma");
		}
    } 
    
			
     	   if(choice2==6){
     	   	int check;
     	   	check=0;
     	   		current=mincount=maxCount=0;
     	   	 for (i = 0; i < *count; i++) {
     	   	 	current=0;
          for(j = 0; j < strlen(ptrlist[i]); j++) {
            if (ptrlist[i][j] == z ) current++;}
             
			 if(current!=0 &&check==0){
			 maxCount=mincount=current;
			 check++;
			 }
			 
			 if (current >maxCount && check==1 && current!=0) {
            maxCount = current;
              }
            
			 if (current < mincount && check==1 && current!=0) {
            mincount = current;
            }
        }
     	   	printf("emphanizetai perisoteres %d kai ligoteres %d \n\n",maxCount,mincount);
			}
			if(choice2==5){
				current=0;
			  for (i = 0; i < *count; i++) {
              for(j = 0; j < strlen(ptrlist[i]); j++) {
              if (ptrlist[i][j] == z ) current++;}
			}
			printf("to grama emphanizete %d fores\n",current);
			}
}
void sortInc4String(char(*ptrlist)[steiles],int*count){
	int check=0;
	int i;
	char temp[180];
	while(check!=1){
		check=1;
		for(i=0;i<*count-1;i++){
		if(strcmp(ptrlist[i],ptrlist[i+1])<0){
		strcpy(temp,ptrlist[i+1]);
		strcpy(ptrlist[i+1],ptrlist[i]);	
		strcpy(ptrlist[i],temp);	
		check=0;
		}
		}
	}
	printf("ayjousa telos\n");
}
void sortDec4String(char(*ptrlist)[steiles],int*count){
	int check=0;
	int i;
	char temp[180];
	while(check!=1){
		check=1;
		for(i=0;i<*count-1;i++){
		if(strcmp(ptrlist[i],ptrlist[i+1])>0){
		strcpy(temp,ptrlist[i+1]);
	    strcpy(ptrlist[i+1],ptrlist[i]);
		strcpy(ptrlist[i],temp);	
		check=0;
	}
    }
}
    printf("fthinousa telos\n");
}

void search(char(*ptrlist)[steiles],int*count){
	char looking[180];
	int i;
	int found=0;
	printf("dose thn lejh pou psaxneis\n");
	scanf("%s",&looking);
	for(i=0;i<*count;i++){
		if(!strcmp(looking,ptrlist[i])){
			printf("h lejh %s yparxei sthn thesi %d\n",looking,i+1);
			found=1;
		}
	}
	if(found!=1){
		printf("h lejh den brethke\n");
		if(*count<grammes){
			printf("exeis arketo xoro thes na thn baleis;\n");
			printf("an nai piesai 1 allios piesai otidipote allo\n");
			scanf("%d",&found);
		}
		if(found==1){
			(*count)++;
			strcpy(ptrlist[*count-1],looking);
		}
	}
}





