#include <stdio.h>
#include <stdlib.h>

/*fancy comments*/

int main(int argc, char *argv[]) {
	int sec;
	int res;
	
	printf("dose ta secs:");
	scanf("%d",&sec);
	
	if(sec%60==0){
		printf("%d minutes",sec/60);
		return 0;
	}
	
	res=sec%60;
	sec=sec/60;
	
	printf("%d min and %d secs",sec,res);
	
	return 0;
}
