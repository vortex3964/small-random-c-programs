#include <stdio.h>
#include <stdlib.h>
#define rows 3
#define columns 3

void printarray(int** array, int offset);
void add_row(int*** array, int* offset);
void del_row(int*** array, int* offset);
void initialize(int** array, int offset);

int main() {
    int i, offset=0;
    char choice=NULL;
    // memory allocation for the 2D array
    int**array=(int**)malloc(sizeof(int*)*rows);
    for (i=0; i<rows;i++)
        array[i] = (int*)malloc(sizeof(int)*columns);

    // values
    initialize(array,offset);
    printarray(array,offset);

while(choice!='x'){
	printf("would you like to add a row with (+) or keep it the same (0) or get rid of a row (-)\n");
    scanf(" %c", &choice);
    switch (choice){
        case '+':
            add_row(&array, &offset);
            initialize(array, offset);
            printf("current array:\n");
            printarray(array, offset);
            break;
        case '-':
            del_row(&array, &offset);
            initialize(array, offset);
            printf("current array:\n");
            printarray(array, offset);
            break;
        case '0':
            printf("current array:\n");
            printarray(array, offset);
            break;
        case 'x':
            printf("done\n");
            printf("current array:\n");
            printarray(array, offset);
            break;
        default:
            printf("not a choice plz select a new choice\n");
            break;
    }}

    freedom:
    // free
    for (i = 0; i < rows; i++)
    free(array[i]);
    free(array);
    return 0;
}

void printarray(int** array, int offset) {
    int i, k;
    for (i = 0; i < rows + offset; i++){
        for (k = 0; k < columns; k++) printf("%d\t", array[i][k]);
        printf("\n");
    }
}

void initialize(int** array, int offset) {
    int i, k;
    for (i = 0; i < rows + offset; i++) for (k = 0; k < columns; k++) array[i][k] = i + k;
}

void add_row(int*** array, int* offset) {
    (*offset)++;
    *array=(int**)realloc(*array,sizeof(int*)*(rows + *offset));
    (*array)[rows+*offset-1]=(int*)malloc(sizeof(int)*columns);
}

void del_row(int*** array, int* offset){
    (*offset)--;
    free((*array)[rows +*offset]);
    (*array)= (int**)realloc(*array, sizeof(int*) * (rows + *offset));
}


