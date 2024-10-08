#include <stdio.h>

int main(){
	//Soal 10 : Program Menghitung Diskoon Harga
	//Muhammad Rafi Fatihul Ihsan(24343016)
	
	//Judul program
	printf("PROGRAM MENGHITUNG DISKON HARGA\n\n");
	//deklarasi variable harga barang dan diskon untuk input user
	int harga,diskon;
	//deklarasi variable untuk menampung hasil harga diskon
	int harga_diskon;
	
	//output text untuk input harga
	printf("Masukkan harga(ex:1000)\t: ");
	//meminta input harga barang dari user
	scanf("%d",&harga);
	
	//output text untuk input diskon
	printf("Masukkan diskon(ex.20)\t: ");
	//meminta input diskon harga dari user tanpa %
	scanf("%d",&diskon);
	
	//operasi hitung mencari harga setelah diskon
	harga_diskon = harga - (harga * diskon / 100);
	
	//menampilkan output harga setelah barang diskon
	printf("\njadi, barang Rp.%d diskon %d persen menjadi Rp.%d", harga,diskon,harga_diskon);
}
