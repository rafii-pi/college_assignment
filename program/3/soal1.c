#include <stdio.h>

int main(){
	// Studi Kasus 1
	//Muhammad Rafi Fatihul Ihsan(24343016)
	printf("PROGRAM OPERASI DUA VARIABEL");
	printf("\n--------------------------------\n");
	//deklarasi variable untuk input user
	double bil1, bil2;
	//deklarasi variabel untuk menampung nilai operasi
	double hasil;
	//output teks untuk input bil1
	printf("bilangan 1 : ");
	//input bil1 dari user
	scanf("%lf",&bil1);
	//output teks untuk input bil2
	printf("bilangan 2 : ");
	//input bil2 dari user
	scanf("%lf",&bil2);
	//operasi perhitungan sesuai soal
	hasil = bil1 / bil2;
	
	//cek kondisi apakah bilangan bernilai nol
	if(bil1 == 0 || bil2 == 0){
		//jika iya, akan mengeluarkan output ini
		printf("\ndivision by zero");
	}
	else{
		//jika tidak, akan menampilkan hasil operasi
		printf("\nHasil Operasi 2 Bilangan tersebut adalah %.3lf",hasil);
	}
}