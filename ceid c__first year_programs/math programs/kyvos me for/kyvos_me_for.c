#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
int i,y,n;

printf("dose akeraio:");
scanf("%d",&n);

for(i=1;i<=n;i++){
	y=i*i*i;
	printf("o kyvos toy %d einai to %d\n",i,y);
}	
	return 0;
}
