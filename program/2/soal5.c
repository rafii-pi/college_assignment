#include <stdio.h>

int main(){
	printf("MENGHITUNG TOTAL GAJI KARYAWAN\n\n");
	int total;												// deklarasi variabel total gaji karyawan
	int gaji;												// deklarasi variabel gaji karyawan per jam
	int jam;												// deklarasi variabel jam kerja 
	printf("Jumlah Jam Kerja(/jam)\t: ");		
	scanf("%d",&jam);										// memasukkan nilai dari jam kerja (input)
	printf("Jumlah Gaji per Jam\t: Rp");
	scanf("%d",&gaji);										// memasukkan nilai dari gaji perjam (input)
	
	total = gaji * jam;										// mencari total gaji karyawan
	printf("\nJadi, Total Gaji Karyawan adalah Rp%d",total);	// output/keluaran dari total gaji karyawan
	
	
	//Soal 5 Menghitung Total Gaji Karyawan
	//Melia Febriani - 24343014
	//Muhammad Rafi Fatihul Ihsan - 24343016
}
