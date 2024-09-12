#include <stdio.h>
#include <stdlib.h>

//x,y 123

int main() {
	
	int x,y;
	
	for(x=0;x<=3;x++)
	{
		for(y=0;y<=3;y++){
			printf("(%d,%d)",x,y);
		}
		printf("\n");
	}
	
	
	return 0;
}
