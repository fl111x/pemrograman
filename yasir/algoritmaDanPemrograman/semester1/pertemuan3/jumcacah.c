/**
 * Program: jumcacah.c
 * Author: 2350081004/Muhamad Yasir Noval
 * Date: ...............
 * Description: ...............
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    // KAMUS
    int bil, hasil;

    // ALGORITMA
    printf("Masukan bilangan: ");
    scanf("%d", &bil);

    hasil = 0;
    if (bil < 0) {
        printf("Bukan bilangan cacah");
    } else {
        for (int i = 0; i <= bil; i++) {
            hasil = i + 1;
            printf("%d ", hasil);
        }
    }

    return 0;
}