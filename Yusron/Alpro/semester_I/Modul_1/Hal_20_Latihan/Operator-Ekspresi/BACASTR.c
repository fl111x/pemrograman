/*
    File: BACASTR.c
    Description: File ini dibuat untuk deklarasi dan alokasi string
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    char *str1;
    char *str2;

    // Algoritma
    printf("\nBaca String, maks 20 karakter: ");
    str1 = (char *) malloc(20 * sizeof (char));
    printf("Masukkan sebuah String, max 20 karakter: ");
    scanf("%s", &str1);

    printf("String yang dibaca: %s\n\n", str1);
    str2 = (char *) malloc(20 * sizeof (char));
    strcpy(str2, str1);

    printf("String yang disalin: %s\n\n", str2);

    return 0;
}