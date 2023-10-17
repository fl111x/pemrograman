/*
    File: oper3.c
    operator trainer
*/
#include <stdio.h>
#include <stdlib.h>

#define max(a,b) ((a>b) ? a: b)

int main()
{
    // Kamus
    int i = 0;
    int j = 0;
    char c = 8;
    char d = 10;
    char e = max(c,d);
    int k = max(i,j);

    // Algoritma
    printf("Nilai e = %d\n\n", e);
    printf("Nilai k = %d\n\n", k);
    
    i = 2;
    j = 3;
    k = max(i++, j++);

    printf("Nilai k = %d\n\n", k);

    return 0;
}