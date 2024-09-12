#include <stdio.h>
#include <stdlib.h>

void addCounter(char array[]);
void takeOut(int*sp,int number);
void draw(int*sp);
void destroy(int*sp);
void dammage(int*sp);
void choices();
void printc(char array[],int times);


int main()
{
    char speedcounters[13];
    int sp=0;
    printf("on your marks get set duel\n");
    printf("**************************\n");

    char choice='0';
    addCounter(speedcounters);
    while(choice=='0')
    {
        sp+=2;
        printc(speedcounters,sp);
        choices();
        scanf(" %c",&choice);
        switch(choice)
        {
            case '4':
            dammage(&sp);
            break;
            case '6':
            draw(&sp);
            break;
            case '9':
            destroy(&sp);
            break;
            case '0':
            break;
        }


        printf("did either player win?(1/0):");
        scanf(" %c",&choice);
    }


    return  0;
}

void printc(char array[],int times)
{
    int i;
    for(i=0;i<times;i++) printf("%c",array[i]);
    printf("\n");
}

void choices()
{
    printf("4-deal 800 damage for eatch speed spell\n");
    printf("6-counters draw a card\n");
    printf("10-counters destroy a card\n");
    printf("*********************\n");
}

void addCounter(char array[])
{
    int i;
    for(i=0;i<12;i++) array[i]='!';
}

void takeOut(int*sp,int number)
{
    *sp-=number;
    
}

void draw(int*sp)
{
    takeOut(sp,6);
}

void destroy(int*sp)
{
    takeOut(sp,10);
}

void dammage(int*sp)
{
    takeOut(sp,4);
}