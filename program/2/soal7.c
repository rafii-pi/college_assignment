#include <stdio.h>

int main(){
	//Soal 7 : Program Menghitung Luas Segitiga
	//Muhammad Rafi Fatihul Ihsan(24343016)
	
	//Judul program
	printf("PROGRAM MENGHITUNG LUAS SEGITIGA\n\n");
	//deklarasi variable alas dan tinggi untuk input user
	float alas,tinggi;
	//deklarasi variable untuk menampung hasil operasi luas(hasil bisa saja berkoma)
	float luas;
	
	//output text untuk input alas
	printf("Masukkan nilai alas\t: ");
	//meminta input alas dari user tipe integer
	scanf("%f",&alas);
	
	//output text untuk input alas
	printf("Masukkan nilai tinggi\t: ");
	//meminta input alas dari user tipe integer
	scanf("%f",&tinggi);
	
	//operasi hitung mencari luas segitiga
	luas = alas * tinggi / 2;
	
	//menampilkan output jam dan menit dari operasi diatas
	printf("\njadi, luas segitiga tersebut adalah %.2f", luas);
}
