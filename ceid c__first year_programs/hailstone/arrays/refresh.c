#include <stdio.h>
#include <stdlib.h>
#define g 6
#define s 5

int main(int argc, char *argv[]) {
	
	int i,j;
	
	int pin[g][s];
	
	
	for(i=0;i<g;i++){
		for(j=0;j<s;j++){
			pin[i][j]=0;
			printf("%d,",pin[i][j]);
		}
	}
	
	
	
	
	return 0;
}
