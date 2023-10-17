/*
    File: Baca.c
    contoh untuk membaca integer
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    int a;

    // Algoritma
    printf("Contoh membaca dan menulis. Ketik nilai integer-nya: ");
    scanf("%d", &a);

    printf("Nilai yang dibaca: %d\n\n", a);

    return 0;
}