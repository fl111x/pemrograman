/*	program : garistegaklurus.c
	author : 2350081008
	date : 17/10/2023
	desc : program membuktikan garis tegak lurus 
*/

#include <stdio.h>
#include <conio.h>

typedef struct {
	int abs, ord;
}point;

	/*typedef struct {
		point;
	}garis;*/

int main() {
	//kamus
		point x1, y1, x2, y2, x3, y3, x4, y4;
		//garis m1, m2;
		int m1, m2;
		
	//algoritma
		//input
		printf("masukan x1 absis :"); scanf("%d", &x1.abs);
		printf("masukan y1 ordinat :"); scanf("%d", &y1.ord);
		printf("masukan x2 absis :"); scanf("%d", &x2.abs);
		printf("masukan y2 ordinat :"); scanf("%d", &y2.ord);
		printf("masukan x3 absis :"); scanf("%d", &x3.abs);
		printf("masukan y3 ordinat :"); scanf ("%d", &y3.ord);
		printf("masukan x4 absis :"); scanf ("%d", &x4.abs);
		printf("masukan y4 ordinat :"); scanf("%d", &y4.ord);
		
		//menghitung gradien m
		m1 = y2.ord - y1.ord/x2.abs - x1.abs;
		
		m2 = y4.ord - y3.ord/x4.abs -x3.abs;
		
		
		
		//pembuktian tegak lurus
		if (m1*m2 == -1){
			printf("garis tegak lurus");
		}else{
			printf("garis tidak tegak lurus");
		}
		
		return 0;
}
