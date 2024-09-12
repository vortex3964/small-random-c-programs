#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char message[]="hello world";
	int i;
	
	for(i=0;message[i];i++){
		
		printf("%c\n",message[i]);
	}
	
	
	return 0;
}
