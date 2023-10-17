/*
    File: asgSTR.c
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    char str1;
    char str2;

    // Algoritma
    printf("\nBaca String, max 20 karakter: ");
    str1 = (char *) malloc(20 * sizeof(char));
    strcpy(str1, "Ini untuk String...");
    printf("String yang di isikan: %s\n\n", str1);
    
    str2 = (char *) malloc(20 * sizeof(char));

    return 0;
}