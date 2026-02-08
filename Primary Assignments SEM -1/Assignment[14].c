/*  Write a C program that opens its own source code file, reads its contents, and then prints
the contents to the console.  */
#include<stdio.h>
int main() {
    FILE *f;
    int ch;
    f = fopen(__FILE__,"r");
    if (f==NULL) {
        printf("Error File opening FAILED!");
        return 1;
    }
    while ((ch = fgetc(f)) != EOF) {
        printf("%c",ch);
    }
    fclose(f);
    return 0;
}