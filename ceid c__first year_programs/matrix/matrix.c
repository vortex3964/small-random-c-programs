//matrix
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int check=0,i,colls;

char menu();
void make_matrix(int***matrix1,int***matrix2,int***temp);
void adition(int**matrix1,int**matrix2,int***temp);
void subtraction(int**matrix1,int**matrix2,int***temp);
void zero(int***matrix);
void print_matrix(int**matrix);
void dual(int**matrix,int***temp);
void set_matrix(int***matrix,int***temp);
void mult(int**matrix1,int**matrix2,int***temp);
void transpoce(int**matrix,int***temp);
void replace(int***matrix,int**temp);
void randome(int***temp,int lower_limit);

int main()
{
    int*matrix1=NULL;
    int**matrix2=NULL;
    int**temp=NULL;

    printf("welcome to the matrix arithmetics for (n*n)\n");
    char y='n';
    char ye[4];
    int upper;

    while(y!='x')
    {
        if(check==0)
        {
            printf("would you like to meke a new matrix (yes/no):");
            fflush(stdin);
            scanf("%s",ye);

            if(strcmp(ye,"yes")==0)
            {
                make_matrix(&matrix1,&matrix2,&temp);
                check=1;
            }
        }

        if(check!=0)
        {
            y=menu();
            switch(y)
            {
                case 'x':
                    goto branch;
                    break;
                case '+':
                    adition(matrix1,matrix2,&temp);
                    print_matrix(temp);
                    break;
                case '-':
                    subtraction(matrix1,matrix2,&temp);
                    print_matrix(temp);
                    break;
                case '*':
                    mult(matrix1,matrix2,&temp);
                    print_matrix(temp);
                    break;
                case '0':
                    zero(&temp);
                    print_matrix(temp);
                    break;
                case 't':
                    printf("\nthe matrix that you want:");
                    scanf("%d",&i);
                    switch(i)
                    {
                        case 1:
                            transpoce(matrix1,&temp);
                            printf("result:\n");
                            break;
                        case 2:
                            transpoce(matrix2,&temp);
                            printf("result:\n");
                            break;
                        default:
                            printf("\nnot an option\n");
                            break;
                    }
                    print_matrix(temp);
                    break;
                case '2':
                    printf("\nthe matrix that you want:");
                    scanf("%d",&i);
                    switch(i)
                    {
                        case 1:
                            dual(matrix1,&temp);
                            printf("result:\n");
                            print_matrix(temp);
                            break;
                        case 2:
                            dual(matrix2,&temp);
                            printf("result:\n");
                            print_matrix(temp);
                            break;
                        default:
                            printf("\nnot an option\n");
                            break;
                    }
                    print_matrix(temp);
                    break;
                case 'r':

                    printf("\nenter the highest number you want:");
                    scanf("%d",&upper);
                    randome(&temp,upper);
                    print_matrix(temp);
                    break;
                case 'c':
                    check--;
                    break;
                default:
                    printf("you dont have a matrix\n");
                    break;
            }

            printf("\nwould you like to enter the result to a matrix (yes/no):");
            fflush(stdin);
            scanf("%s",ye);

            if(strcmp(ye,"yes")==0)
            {
                printf("\n witch matrix would you want to replace the 1 or the 2?:");
                scanf("%d",&i);
                switch(i)
                {
                    case 1:
                        replace(&matrix1,temp);
                        break;
                    case 2:
                        replace(&matrix2,temp);
                        break;
                    default:
                        printf("not an option\n");
                        break;
                }
            }
            printf("\ncurrent matrixes:\n");
            printf("------------------------------------------\n");
            print_matrix(matrix1);
            print_matrix(matrix2);
        }
    }
    branch:
    return 0;
}

char menu()
{
    char choice;
    printf("\nx_closes the program\n");
    printf("+_adds\n");
    printf("-_subs\n");
    printf("*_multplies\n");
    printf("0_fills a natrix with zeroes\n");
    printf("t_transpose a matrix\n");
    printf("2_the matix^2\n");
    printf("r_fills a matrix with random numbers\n");
    printf("c_clears both matrixes\n");
    printf("give your choice:");
    fflush(stdin);
    scanf(" %c",&choice);
    return choice;
}

void make_matrix(int***matrix1,int***matrix2,int***temp)
{

      int j;

    printf("Give me the columns:");
    scanf("%d",&colls);


    *matrix1=(int**)realloc(*matrix1, sizeof(int*)*colls);
    *matrix2 = (int**)realloc(*matrix2, sizeof(int*)*colls);
    *temp=(int**)realloc(*temp, sizeof(int*)*colls);


    for (i=0;i<colls; i++)
    {
        (*matrix1)[i]=(int*)malloc(sizeof(int)*colls);
        (*matrix2)[i]=(int*)malloc(sizeof(int)*colls);
        (*temp)[i]=(int*)malloc(sizeof(int)*colls);
    }

     for(i=0;i<colls;i++)
    {
        for(j=0;j<colls;j++)
        {
            printf("enter matrix 1 row:%d-coll%d:",i+1,j+1);
            scanf("%d",&(*matrix1)[i][j]);
        }
    }

     for(i=0;i<colls;i++)
    {
        for(j=0;j<colls;j++)
        {
            printf("enter matrix 2 row:%d-coll%d:",i+1,j+1);
            scanf("%d",&(*matrix2)[i][j]);
        }
    }

}

void adition(int**matrix1,int**matrix2,int***temp)
{
    int j;
    for(i=0;i<colls;i++)
    {
        for(j=0;j<colls;j++)
        {
            (*temp)[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

}

void subtraction(int**matrix1,int**matrix2,int***temp)
{
    int j;
    for(i=0;i<colls;i++)
    {
        for(j=0;j<colls;j++)
        {
            (*temp)[i][j]=matrix1[i][j]-matrix2[i][j];
        }
    }
}

void zero(int***matrix)
{
    int j;
    for(i=0;i<colls;i++)
    for(j=0;j<colls;j++)
    (*matrix)[i][j]=0;
}

void dual(int**matrix,int***temp)
{
    int j;
    for(i=0;i<colls;i++)
    {
        for(j=0;j<colls;j++)
        {
            (*temp)[i][j]=matrix[i][j]*matrix[i][j];
        }
    }
}

void print_matrix(int**matrix)
{
    printf("\n");
    int j;
    for(i=0;i<colls;i++)
    {
        for(j=0;j<colls;j++)
        {
            printf("%d\t",matrix[i][j]);

        }
        printf("\n");
    }
}

void set_matrix(int***matrix,int***temp)
{
    int j;
    for(i=0;i<colls;i++)
    for(j=0;j<colls;j++)
    (*matrix)[i][j]=((*temp)[i][j]);
}

void mult(int**matrix1,int**matrix2,int***temp)
{
    int j,c,man;

    for(i=0;i<colls;i++)
    {
        for(c=0;c<colls;c++)
        {
            man=0;
            for(j=0;j<colls;j++)
            {
                man+=((matrix1[i][j])*(matrix2[j][c]));
            }

            (*temp)[i][c]=man;
        }
    }
}

void transpoce(int**matrix,int***temp)
{
    int j;
    for(i=0;i<colls;i++)
    {
        for(j=0;j<colls;j++)
        {
            (*temp)[i][j]=matrix[j][i];
        }
    }
}

void replace(int***matrix,int**temp)
{
    int j;
    for(i=0;i<colls;i++)
    {
        for(j=0;j<colls;j++)
        {
            (*matrix)[i][j]=temp[i][j];
        }
    }
}

void randome(int***temp,int upper_limit)
{
    int j;
    for(i=0;i<colls;i++)
    {
        for(j=0;j<colls;j++)
        {
            (*temp)[i][j]=rand()%upper_limit;
        }
    }

}
