/*
    Program: gaji_pokok_3.c
    Author: 2350081004/Muhamad Yasir Noval
    Date: 17 Oktober 2023
    Description: latihan untuk mencari gaji total
    dengan tambahan conditional tunjangan masa kerja,
    dan pengecekan usia pada anak untuk tunjangan anak
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {
    // KAMUS
    long gaTot, gaPok, tjAnak, tjGol, tjMk, tjAnak1, tjAnak2, tjAnak3;
    int anak, gol, mk, usiaAnak1, usiaAnak2, usiaAnak3;

    // ALGORITMA
    printf("Input Gaji Pokok: ");
    scanf("%d", &gaPok);

    printf("Input Jumlah Anak: ");
    scanf("%d", &anak);

    if (anak <= 3) {
        printf("Input Usia Anak pertama: ");
        scanf("%d", &usiaAnak1);

        printf("Input Usia Anak Kedua: ");
        scanf("%d", &usiaAnak2);

        printf("Input Usia Anak Ketiga: ");
        scanf("%d", &usiaAnak3);
    } else {
        anak = anak;
    }

    printf("Input Golongan: ");
    scanf("%d", &gol);

    printf("Input Masa Kerja: ");
    scanf("%d", &mk);

    // menentukan golongan yang diinputkan
    if (gol == 1) {
        tjGol = 1000000;
    } else if (gol == 2) {
        tjGol = 2000000;
    } else {
        tjGol = 0;
    }

    // menentukan jumlah anak yang diinputkan
    if (anak <= 3) {
        if (usiaAnak1 <= 17) {
            tjAnak1 = 700000;
        } else if (usiaAnak2 <= 17) {
            tjAnak2 = 700000;
        } else if (usiaAnak3 <= 17) {
            tjAnak3 = 700000;
        } else {
            tjAnak = 0;
        }
    } else {
        tjAnak = 3 * 700000;
    }

    // menentukan masa kerja yang diinputkan
    if (mk < 5) {
        tjMk = 500000;
    } else if (mk <= 5 && mk < 10) {
        tjMk = 1000000;
    } else {
        tjMk = 2000000;
    }

    tjAnak = tjAnak1 + tjAnak2 + tjAnak3;
    gaTot = gaPok + tjAnak + tjGol + tjMk;

    printf("Gaji Total Rp.%ld", gaTot);

    return 0;
}

