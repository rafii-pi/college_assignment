#include <stdio.h>

int main(){
	
	//judul program
	printf("PROGRAM MENGHITUNG LUAS PERSEGI PANJANG\n\n");
	
	//deklarasi variable untuk input user
	int panjang;
	int lebar;
	//deklarasi variable luas
	int luas;
	
	//teks untuk permintaan input dari user
	printf("masukkan nilai panjang\t: ");
	//meminta input panjang & lebar dari user
	scanf("%d",&panjang);
	//teks untuk permintaan input daru user
	printf("masukkan nilai lebar\t: ");
	//meminta input panjang & lebar dari user
	scanf("%d",&lebar);
	
	//proses menghitung luas persegi
	luas = panjang * lebar;
	
	//menampilkan output/keluaran dari luas
	printf("\njadi,luas persegi panjang adalah %d",luas);
}
