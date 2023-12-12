/*	program	: pros_1.c
	author	: Ammar Bagas Fathurrahman Wamtoro
	nim		: 12350081008
	date	: 31/10//2023
	desc 	: program memannggil sebuah procedure dalam bahasa c dengan fungsi menukar nilai variabel
*/


#include <stdio.h>
#include <conio.h>

//program untuk memmanggil sebuah procedure


//kamus global
//definis prototype

void tukar (int *a, int *b);
/* I.S : a,b terdefinisi sembarang
   F.S : a dan b saling bertukar nilai */
   
int main () {
	//kamus lokal pada main drivr
	int bil1, bil2;
	
	//algoritma
	printf("masukan bilangan 1 :"); scanf("%d", &bil1);
	printf("masukan bilangan 2 :"); scanf("%d", &bil2);
	
	
	//procedure
	tukar(&bil1, &bil2);
	printf("hasil pertukaran bil 1 : %d, bil 2 : %d", bil1, bil2);
	
	return 0;
}


//algoritma procedure
void tukar (int *a, int *b){
	
	
	//kamus lokal
	int tmp;
	
	//algortima
	tmp = *a;
	*a = *b;
	*b = tmp;
}
