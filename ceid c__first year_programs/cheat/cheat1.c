#include <stdio.h>
#include <stdbool.h>
bool theres_a_3(int array[]);
bool theres_a_2(int array[]);

int main(){
    printf("calculator\n***********\n");
    int digits[4];
    int i;
    int run=0;
    int counter=0;

    for(i=0;i<4;i++) digits[i]=0;
    
    
        
        for(digits[0]=0;digits[0]<10;digits[0]++)
            for(digits[1]=0;digits[1]<10;digits[1]++)
                for(digits[2]=0;digits[2]<10;digits[2]++)
                    for(digits[3]=0;digits[3]<10;digits[3]++){
                        if(theres_a_2(digits)&&theres_a_3(digits)) counter++;
                        
                        run++;
                    }
        
        
    
    printf("the total amount is %d and it looked trough %d periptoseis",counter,run);
    return 0;
}

bool theres_a_3(int array[])
{
    int i;
    for(i=0;i<4;i++)
    {
        if(array[i]==3) return true;
    }
    return false;
}

bool theres_a_2(int array[])
{
    int i;
    for(i=0;i<4;i++)
    {
        if(array[i]==2) return true;
    }
    return false;
}

