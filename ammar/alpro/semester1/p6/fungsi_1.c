/*	program	:  fungsi_1.c
	author	: Ammar Bagas Fathurrahman Wamtoro
	nim		: 12350081008
	date	:28/11//2023
	desc 	: mencari nilai diskriminan menggunakan function
*/
#include<stdio.h>
#include<conio.h>

//prototpe diskriminant
int Diskriminant(int a, int b, int c);

int main(){
	//kamus
	int a, b, c;
	int D;
	//algortima
	printf("masukan nilai a :"); scanf("%d", &a);
	printf("masukan nilai b :"); scanf("%d", &b);
	printf("masukan nilai c :"); scanf("%d", &c);
	
	D = Diskriminant(a, b, c);
	
	printf("Diskriminan : %d", D);
	return 0;
}

int Diskriminant(int a, int b, int c){
	//kamus
	int d;
	
	//algoritma
	d = ((b*b) - (4*a*c));
	
	return d;
}
