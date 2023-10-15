/*
    Program:
    Nama: 
    NIM:
    Class:
    Description:
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Kamus
    // Staff = 1 Jt dengan bekerja paling lama 5 th dan umur = 50 th
    // Staff bekerja < 5 th umur bebas mendapat 500 rb
    // Non Staff bekerja > 5 th mendapat 400 rb
    // Jika berumur 50 th sedangkan non staff yang berumur < 50 th mendapat bonus 250 rb
    // Staff umurnya < 50 th mendapat bonus 300 rb
    int Staff;
    int nonStaff;
    int umur;
    int lamaBekerja = 5;

    // Algoritma
    if(Staff > lamaBekerja && umur >= 50) {
        printf("Anda mendapatkan Bonus sebesar Rp.1.000.000");
    
    } else if(Staff < lamaBekerja) {
        printf("Anda mendapatkan Bonus sebesar Rp.500.000");

    } else if(nonStaff > lamaBekerja && umur == 50) {
        if()
        printf("Anda mendapatkan Bonus sebesar Rp.400.000");

    } 


    return 0;
}
