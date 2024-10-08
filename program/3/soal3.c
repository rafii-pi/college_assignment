#include <stdio.h>
#define PI 3.14

int main(){
	// Studi Kasus 3
	//Muhammad Rafi Fatihul Ihsan(24343016)
	printf("\nPROGRAM MENAMPILKAN MENU & MELAKUKAN PROSES");
	printf("\n--------------------------------\n");
	//deklarasi variabel untuk memilih operasi yang akan dilakukan
	int kondisi;
	//output teks untuk input dalam memilih operasi
	printf("Pilih Menu Operasi\n1. Menghitung Volume Kubus\n2. Menghitung Luas Lingkaran\n3. Menghitung Volume Silinder\npilih nomor(1/2/3) : ");
	//input kondisi dari user untuk memilih operasi
	scanf("%d",&kondisi);
	if(kondisi == 1){
		//jika kondisi == 1, maka akan dilakukan operasi mencari vol.kubus
		int sisi_kubus, volume_kubus;
		printf("\nMasukkan Nilai Sisi Kubus : ");
		scanf("%d",&sisi_kubus);
		volume_kubus =  sisi_kubus * sisi_kubus * sisi_kubus;
		printf("Volume Kubus = %d",volume_kubus);
	}
	else if(kondisi == 2){
		//jika kondisi == 2, maka akan dilakukan operasi mencari luas lingkaran
		int jari_lingkaran;
		double luas_lingkaran;
		printf("\nMasukkan Nilai luas lingkaran : ");
		scanf("%d", &jari_lingkaran);
		luas_lingkaran = PI * jari_lingkaran * jari_lingkaran;
		printf("Luas lingkaran = %.2lf",luas_lingkaran);
	}
	else if(kondisi == 3){
		//jika kondisi == 3, maka akan dilakukan operasi mencari volume silinder
		double jari_lingkaran, tinggi_silinder;
		double volume_silinder;
		printf("\nMasukkan Nilai Jari-jari lingkaran  : ");
		scanf("%lf", &jari_lingkaran);
		printf("Masukkan Nilai Tinggi dari silinder : ");
		scanf("%lf", &tinggi_silinder);
		volume_silinder = PI * jari_lingkaran * jari_lingkaran * tinggi_silinder;
		printf("Nilai volume silinder = %.2lf", volume_silinder);
	}
	else{
		//jika input diluar dari kondisi, makan akan menampilkan output dibawah
		printf("kesalahan input!");
	}
}