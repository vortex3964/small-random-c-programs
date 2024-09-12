#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void returnStr();
void returnChar();
void returnEachLine(char a[], int b, int c);
void returnSubEachLast();

char name[10];

int loops;


int main(int argc, char *argv[]) { 
    scanf("%s", &name);
    loops = strlen(name);
    
    returnStr();
    returnChar();
    returnEachLine(name, loops, 1);
    returnSubEachLast();
    // gia to "NIKOY"
    returnEachLine("NIKOY", strlen("NIKOY"), 0);
}


void returnStr() {
    int i = 0;    
    while (name[i] != '\0') {
        printf("%c", name[i]);
        i++;
    }
}

void returnChar() {
    int loops = strlen(name);
    int i = 0;
    while (name[i] != '\0') {
        printf("\n%c", name[i]);
        i++;
    }
    printf("\n");
}

void returnEachLine(char a[], int b, int c) {
    int j = b;
    int i;
    while (j > 0) {
        i = 0;
        while (i < j) {
            if (c == 1) printf("%c", a[i]);
            else printf("%c", a[b - 1 - i]);
            i++;
        }
        printf("\n");
        j--;
    }
}

void returnSubEachLast() {
    int j = 1;
    int i = 0;
    while (j <= loops) {
        while (i < loops) {
            printf("%c", name[i]);
            i++;
        }
        printf("\n");
        i = j;
        j++;
    }
}





