#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	double x1,y1,x2,y2,dist;
	
	printf("dose ta shmeia (x1,y1) kai (x2,y2)\n");
	scanf("%lf\t%lf\n%lf\t%lf",&x1,&y1,&x2,&y2);
	
	dist=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	
	printf("%lf",dist);
	return 0;
}
