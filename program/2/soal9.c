#include <stdio.h>

int main(){
	//Soal 9 : Program Menghitung Jarak Tempuh
	//Muhammad Rafi Fatihul Ihsan(24343016)
	
	//Judul program
	printf("PROGRAM MENGHITUNG JARAK TEMPUH\n\n");
	//deklarasi variable kecepatan dan waktu untuk input user
	int kecepatan,waktu;
	//deklarasi variable untuk menampung hasil jarak
	int jarak;
	
	//output text untuk input kecepatan
	printf("Masukkan nilai kecepatan: ");
	//meminta input kecepatan dari user
	scanf("%d",&kecepatan);
	
	//output text untuk input waktu
	printf("Masukkan nilai waktu\t: ");
	//meminta input waktu dari user
	scanf("%d",&waktu);
	
	//operasi hitung mencari jarak
	jarak = kecepatan * waktu;
	
	//menampilkan output jarak dari operasi diatas
	printf("\njadi, jarak tempuh perjalan adalah %d meter", jarak);
}
