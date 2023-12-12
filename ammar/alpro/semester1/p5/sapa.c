/*	program	:  sapa.c
	author	: Ammar Bagas Fathurrahman Wamtoro
	nim		: 12350081008
	date	:7/11//2023
	desc 	: program mencetak jika lebih dari umur 17 tahun menggunakan kak dan jika kurang dari 17 tahun menggunakan dik
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void sapa (char nama[], int umur);

int main (){
	//kamus
	int umur;
	char nama[100];
	
	//algoritma
	//input
	printf ("masukan nama :"); scanf ("%[^\n]", &nama);
	
	printf ("masukan umur :"); scanf ("%d", &umur);
	
	sapa(nama, umur);
	
	return 0;
}

void sapa (char nama[], int umur){
	
	if (umur >= 17){
		printf("halo kak %s\n", nama);
		printf("anda sudah cukup dewasa");
	}else{
		printf("halo dik %s\n", nama);
		printf("anda belum cukup dewasa");
	}
}
