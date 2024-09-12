//frequent

#include <stdio.h>


//  plythos
int main() {
    int n;
    int i=0;
    
	printf("plythos: ");
    scanf("%d", &n);
//an dosy 0
   if (n <= 0) {
        printf("doste thetiko plythos \n");
        return 1;
    }

// loop for the check
    int current, previous, maxNumber, maxCount, currentCount;
    
    
    maxNumber = previous = currentCount = maxCount = 0;

    printf("Enter %d numbers:\n", n);
    while ( i < n ) {
        scanf("%d", &current);

        
        if (current == previous) {
            currentCount++;
        } else {
            currentCount = 1;
        }

        
        if (currentCount > maxCount) {
            maxCount = currentCount;
            maxNumber = current;
        }

        
        previous = current;
        i++;
    }
// gia ena,kai to zhtioymeno
    if (maxCount == 1) {
        printf("yparxei mono 1 emfanhsh tvn ariumvn \n");
    } else {
        printf("%d,%d fores\n", maxNumber, maxCount);
    }

    return 0;
}




