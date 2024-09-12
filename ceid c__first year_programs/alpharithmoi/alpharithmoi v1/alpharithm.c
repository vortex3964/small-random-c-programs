#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,j,y;
	int n=0;
// o nikos	
	char name[10]="nikou";

// a	
	printf("%s\n\n",name);
	
	
// b	
	for(i=0;i<10;i++)
	{
		printf("%c",name[i]);
	}
	printf("\n\n");
// c

	for(i=0;i<10;i++)
	{
		printf("%c\n",name[i]);
	}	
	printf("\n\n");
// d
  for(j=0;j<10;j++){
  
   for(i=n;i<10;i++){
   	printf("%c",name[i]);
   }
	printf("\n");
	n++;
	}
	
	i=0;

y=strlen(name);
	//e
 for(i=strlen(name);i>0;i--){
 
	for(j=0;j<y;j++){
		printf("%c",name[j]);
	}
	printf("\n");
	y--;
}



return 0;
}
