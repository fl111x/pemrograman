/*
    Program: loop_3.c
    Name: Muhamad Yusron Noval
    NIM: 2350081003
    Class: A
    Description: Perulangan menggunakan repeat until
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int N;
    float i,s;

    // Algoritma
    i = 1;
    do {
        printf("%1.3f", 1/i);
        if(i < N) {
            printf("+");
            s = s + 1/i;
            i++;
        }
    } while (i <= N);

    return 0;
}