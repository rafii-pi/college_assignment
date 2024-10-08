#include <stdio.h>

int main(){
	//Soal 1 : Menghitung Keliling Persegi
	//Muhammad Rafi Fatihul Ihsan(24343016)
	
	//Judul program
	printf("PROGRAM MENGHITUNG KELILING PERSEGI\n\n");
	//deklarasi variable sisi dan keliling tipe integer
	int sisi,keliling;
	
	//output text untuk input
	printf("Masukkan Panjang sisi(ex:4) : ");
	//meminta input dari user tipe integer
	scanf("%d",&sisi);
	
	//mencari keliling persegi
	keliling = 4 * sisi;
	
	//menampilkan output dari keliling persegi
	printf("\njadi, keliling persegi tersebut adalah %d", keliling);
}












