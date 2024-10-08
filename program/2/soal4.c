#include <stdio.h>

int main(){
	//Soal 4 : Program Menghitung volume kubus
	//Muhammad Rafi Fatihul Ihsan(24343016)
	
	//Judul program
	printf("PROGRAM MENGHITUNG VOLUME KUBUS\n\n");
	//deklarasi variable sisi integer
	int sisi;
	//deklarasi variable volume untuk hasil operasi
	int volume;
	
	//output text untuk input
	printf("Masukkan panjang sisi(ex:12) : ");
	//meminta input sisi dari user tipe integer
	scanf("%d",&sisi);
	
	//operasi hitung volume kubus
	volume = sisi * sisi * sisi;
	
	//menampilkan output volume kubus dari operasi diatas
	printf("\njadi, volume kubus tersebut adalah %d", volume);
}
