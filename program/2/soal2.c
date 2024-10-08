#include <stdio.h>

int main(){
	//Soal 2 : Menghitung rata-rata 3 angka
	//Muhammad Rafi Fatihul Ihsan(24343016)
	
	//deklarasi variable rata-rata dan input angka
	//bertipe float karena pembagian bisa saja bernilai koma
	float rata_rata;
	float angka1,angka2,angka3;
	
	//judul program
	printf("PROGRAM MENGHITUNG RATA-RATA\n\n");
	
	//output text untuk input
	printf("Masukkan nilai angka1(ex:1) : ");
	//meminta input dari user tipe integer
	scanf("%f",&angka1);
	//output text untuk input
	printf("Masukkan nilai angka2(ex:2) : ");
	//meminta input dari user tipe integer
	scanf("%f",&angka2);
	//output text untuk input
	printf("Masukkan nilai angka3(ex:3) : ");
	//meminta input dari user tipe integer
	scanf("%f",&angka3); 
	
	//mencari rata-rata dari penjumlahan angka
	rata_rata = (angka1 + angka2 + angka3)/3;
	
	//menampilkan output dari keliling persegi
	printf("\njadi, nilai rata-rata dari operasi diatas adalah %.2f", rata_rata);
}
