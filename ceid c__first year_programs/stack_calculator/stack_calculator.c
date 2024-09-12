//my stack calculator

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define IS_NUM 1
#define STACK_SIZE 20
#define EXPRESION_SIZE 30

int get_operand(char array[]);
void push(double number);
double pop();
void add();
void sub();
void mult();
void division();
void result();

typedef struct
{
    double stack[STACK_SIZE];
    int sp;
}stack;

stack st;

int main()
{
    printf("my homemade stack calculator\n");
    printf("----------------------------\n");
    
    char expresion[EXPRESION_SIZE];
    int input_type;

    //ends when user enters 'x'
    while((input_type=get_operand(expresion))!=EOF && input_type!='x')
    {
        switch(input_type)
        {
            case IS_NUM:
                push(atof(expresion));
                break;
            case '+':
                add();
                break;
            case '-':
                sub();
                break;
            case '*':
                mult();
                break;
            case '/':
                division();
                break;
            case '=':
                result();
                break;
            default:
                printf("not an operation\n");
                break;
        }
    }
    //after ending
    printf("thanks for using my stack calculator");
    return 0;
}

int get_operand(char array[])
{
    int character;
    int i=0;
    character=getchar();
    while(character==' '|| character=='\n')   character=getchar();
    array[1]='\0';
    array[0]=character;

    if (isdigit(character))
    {
        while(isdigit(array[++i]=character=getchar()));
        if(character=='.')
        while(isdigit(array[++i]=character=getchar()));
        array[i]='\0';
        return IS_NUM;
    }
    else
    {
        return character;
    }
}

void add()
{
    double num;
    printf("the addition of the 2 numbers is %lf\n",num=pop()+pop());
    push(num);
}

void sub()
{
    double num;
    printf("the subtraction of the 2 numbers is %lf\n",num=-pop()+pop());
    push(num);
}

void mult()
{
    double num;
    printf("the multiplication of the 2 numbers is %lf\n",num=pop()*pop());
    push(num);
}

void division()
{
    double checker=pop();
    
    if(checker==0.0)
    {
        printf("the division isnt possible\n");
    }
    else
    {
        push(checker=pop()/checker);
        printf("the result is %lf",checker);
    }
    
}

void result()
{
    printf("res:%lf\n",pop());
}



void push(double number)
{
    if(st.sp<STACK_SIZE)
    {
      printf("the number:%lf is being added to the stack\n",st.stack[st.sp++]=number);  
    }
    else printf("stack is full\n");
}

double pop()
{
    if(st.sp>0)
    {
        return st.stack[--st.sp];
    }
    else
    {
        printf("stack empty\n");
    }
}