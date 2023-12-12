/*	program	:  function.c
	author	: Ammar Bagas Fathurrahman Wamtoro
	nim		: 12350081008
	date	:28/11//2023
	desc 	: mencari nilai persamaan akar kuadrat dari nilai diskriminan dengan meggunakan fungsi
*/

#include<stdio.h>
#include<conio.h>
#include<math.h>

//prototype
int akarkdrt(int x, int y, int z);
int Diskriminant(int a, int b, int c);
int main() {
	//kamus
	int a, b, c;
	int D;
	double hasil;
	
	//algoritma
	printf("masukan nilai a :"); scanf("%d", &a);
	printf("masukan nilai b :"); scanf("%d", &b);
	printf("masukan nilai c :"); scanf("%d", &c);
	
	D = Diskriminant(a, b, c);
	
	printf("Diskriminan : %d", D);
	
	if(D > 0){
		hasil = akarkdrt(a, b, D);
	}else{
		hasil = 999;
	}
	
	printf("\nhasil dari persamaan akar kuadrat : %.2lf", hasil);
	
	return 0;
}

int Diskriminant(int a, int b, int c){
	//kamus
	int d;
	
	//algoritma
	d = ((b*b) - (4*a*c));
	
	return d;
}

int akarkdrt(int x, int y, int z){
	//kamus
	double hasiltambah;
	double hasilkurang;
	double hasil;
	//algoritma
	
	hasiltambah = (-y + sqrt(z)) / (2 * x);
	
	hasilkurang = (-y - sqrt(z)) / (2 * x);
	
	hasil = hasiltambah + hasilkurang;
	
	return hasil;
	
}
