/*
    Program: if4.c
    Author: 2350081003/Muhamad Yusron Noval
    Date: 17/10/2023
    Description: Program menghitung gaji total dengan tambahan masa kerja dan usia tunjangan anak
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    long gatot, gapok, tjAnak1, tjAnak2, tjAnak3, tjGol;
    int Anak, Gol, tjMk, UsiaAnak1, UsiaAnak2, UsiaAnak3;

    // Algoritma
    printf("Input gapok: ");
    scanf("%d", &gapok);

    printf("Input jum.Anak: ");
    scanf("%d", &Anak);

    printf("Input gol: ");
    scanf("%d", &Gol);

    printf("Input MasaKerja: ");
    scanf("%d", &tjMk);

   // Untuk Tunjangan Golongan
    if(Gol == 1) {
        tjGol = 1000000;
        printf("\nTunjangan Golongan: Rp.1.000.000\n\n");
    
    } else if(Gol == 2) {
        tjGol = 2000000;
        printf("\nTunjangan Golongan: Rp.2.000.000\n\n");
    
    } else {
        printf("\nTunjangan Golongan: Rp.0\n\n");
    }

    // Untuk Tunjangan Masa Kerja
    if(tjMk < 5) {
        tjMk = 500000;
        printf("Tunjangan Masa Kerja: Rp.500.000\n\n");
    
    } else if(tjMk <= 5 && tjMk < 10) {
        tjMk = 1000000;
        printf("Tunjangan Masa Kerja: Rp.1.000.000\n\n");
    
    } else {
        tjMk = 2000000;
        printf("Tunjangan Masa Kerja: Rp.2.000.000\n\n");
    }

    // Untuk Tunjangan Anak
    if(Anak == 1) {
        printf("Input Usia Anak1: ");
        scanf("%d", &UsiaAnak1);
        
        if(UsiaAnak1 <= 17) {
            tjAnak1 = 1 * 700000;
            printf("\n\nTunjangan Anak1: Rp.%d\n\n", tjAnak1);
        
        }
        else {
            tjAnak1 = 0;
            printf("Anak yang lebih umur-nya dari 17 tidak dapat tunjangan\n\n");
        }

        // Hasil Gatot

        gatot = gapok + tjAnak1 + tjGol + tjMk ;
        printf("Gaji Total: Rp.%d\n\n", gatot);
    }
    
    else if(Anak == 2) {
        printf("Input Usia Anak1: ");
        scanf("%d", &UsiaAnak1);

        printf("Input Usia Anak2: ");
        scanf("%d", &UsiaAnak2);
        
        if(UsiaAnak1 <= 17) {
            tjAnak2 = 1 * 700000;
            printf("\n\nTunjangan Anak1: Rp.%d\n\n", tjAnak2);
        
        }
        
        if(UsiaAnak2 <= 17) {
            tjAnak2 = 1 * 700000;
            printf("Tunjangan Anak2: Rp.%d\n\n", tjAnak2);
        
        }

        else {
            tjAnak2 = 0;
            printf("Anak yang lebih umur-nya dari 17 tidak dapat tunjangan\n\n");
        }

        // Hasil Gatot

        gatot = gapok + tjAnak2 + tjGol + tjMk ;
        printf("Gaji Total: Rp.%d\n\n", gatot);
    }

    else if(Anak == 3) {
        printf("Input Usia Anak1: ");
        scanf("%d", &UsiaAnak1);

        printf("Input Usia Anak2: ");
        scanf("%d", &UsiaAnak2);

        printf("Input Usia Anak3: ");
        scanf("%d", &UsiaAnak3);

        if(UsiaAnak1 <= 17) {
            tjAnak3 = 1 * 700000;
            printf("\n\nTunjangan Anak1: Rp.%d\n\n", tjAnak3);
        
        }
        
        if(UsiaAnak2 <= 17) {
            tjAnak3 = 1 * 700000;
            printf("Tunjangan Anak2: Rp.%d\n\n", tjAnak3);
        
        }
        
        if(UsiaAnak3 <= 17) {
            tjAnak3 = 1 * 700000;
            printf("Tunjangan Anak3: Rp.%d\n\n", tjAnak3);
        
        }
        
        else {
            tjAnak3 = 0;
            printf("Anak yang lebih umur-nya dari 17 tidak dapat tunjangan\n\n");
        }

    } else {
        // tjAnak1 = 3 * 700000;
        // printf("Tunjangan Anak: Rp.%d\n\n", tjAnak1);
        printf("Gagal");
    }

    return 0;
}