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

void tukar (int *a, int *b, int *c);
/* I.S : a,b terdefinisi sembarang
   F.S : a dan b saling bertukar nilai */
   
int main () {
	//kamus lokal pada main drivr
	int bil1, bil2, bil3;
	
	//algoritma
	printf("masukan bilangan 1 :"); scanf("%d", &bil1);
	printf("masukan bilangan 2 :"); scanf("%d", &bil2);
	printf("masukan bilangan 3 :"); scanf("%d", &bil3);
	
	
	//procedure
	tukar(&bil1, &bil2, &bil3);
	printf("hasil pertukaran bil 1 : %d, bil 2 : %d, bil 3 : %d", bil1, bil2, bil3);
	
	return 0;
}


//algoritma procedure
void tukar (int *a, int *b, int *c){
	
	
	//kamus lokal
	int tmp1;
	int tmp2;
	int tmp3;
	
	//algortima
	tmp1 = *a;
	tmp2 = *b;
	tmp3 = *c;
	
	
	*a = tmp3;
	*b = tmp1;
	*c = tmp2;
}
/*
void tukar (int *a, int *b, int *c){

	//kamus lokal
	int tmp;
	
	//algoritma
	tmp = *c;
	*c = *b;
	*b = *a;
	*a = tmp;
}*/
