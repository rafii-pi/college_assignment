#include <stdio.h>

int main(){
	//Soal 6 : Program Konversi Waktu(menit ke jam , menit)
	//Muhammad Rafi Fatihul Ihsan(24343016)
	
	//Judul program
	printf("PROGRAM KONVERSI WAKTU\n\n");
	//deklarasi variable waktu dalam menit untuk input user
	int waktu;
	//deklarasi variable untuk output jam,menit
	int jam, menit;
	
	//output text untuk input
	printf("Masukkan total waktu dalam satuan menit(ex:60) : ");
	//meminta input waktu dari user tipe integer
	scanf("%d",&waktu);
	
	//operasi hitung mencari jam dan menit
	jam = waktu / 60 ;
	menit = waktu % 60;
	
	//menampilkan output jam dan menit dari operasi diatas
	printf("\njadi, %d menit sama dengan %d jam %d menit", waktu,jam,menit);
}
