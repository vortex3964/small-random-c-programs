#include <stdio.h>
#include <math.h>

int main() {
    int digits[4];
    int currentnumber;

    for (digits[0] = 1; digits[0] < 10; digits[0]++) {
        for (digits[1] = 0; digits[1] <= 9; digits[1]++) {
            for (digits[2] = 0; digits[2] <= 9; digits[2]++) {
                for (digits[3] = 0; digits[3] < 10; digits[3]++) {
                 currentnumber=(1000 * digits[0] + 100 * digits[1] + 10 * digits[2] + digits[3]);
                    if (currentnumber== (pow(digits[0], 4) + pow(digits[1], 4) +pow(digits[2], 4) + pow(digits[3],4))) {
                        printf("%d\n", currentnumber);
                        digits[0]++;
                        digits[1]=digits[2]=digits[3]=0;
                    }
                }
            }
        }
    }

    return 0;
}
