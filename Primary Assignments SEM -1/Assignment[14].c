/*  Write a C program that opens its own source code file, reads its contents, and then prints
the contents to the console.  */
#include<stdio.h>
int main() {
    FILE *f;
    int ch;
    f = fopen(__FILE__,"r");
    if (f==NULL) {
        printf("Error : File opening FAILED!");
        return 1;
    }
    ch = fgetc(f);
    while (ch != EOF) {
        printf("%c",ch);
        ch = fgetc(f);
    }
    fclose(f);
    return 0;
}