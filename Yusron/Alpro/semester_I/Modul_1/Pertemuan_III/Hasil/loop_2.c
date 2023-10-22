/*
    Program: loop_2.c
    Name: Muhamad Yusron Noval
    NIM: 2350081003
    Class: A
    Description: Perulangan menggunakan while do
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int N;
    float i, s;

    // Algortima
    i = 1;
    while (i <= N) {
        printf("%1.3f", 1/i);

        if(i < N) {
            printf("+");
            s = s + 1/i;
            i++;
        }
    }

    return 0;
}