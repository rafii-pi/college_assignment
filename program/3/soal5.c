#include <stdio.h>

int main(){
	// Studi Kasus 5
	//Muhammad Rafi Fatihul Ihsan(24343016)
	printf("\nMENGHITUNG PANGKAT SUATU NILAI");
	printf("\n--------------------------------\n");
	//deklarasi variabel nilai dengan pangkatnya
    int nilai, pangkat;
    //deklarasi nilai untuk menampung hasil dari operasi perpangkatan
    int hasil = 1;
    
    //output teks untuk meminta input nilai
    printf("Masukkan Nilai  : ");
    //input nilai dari user
    scanf("%d", &nilai);
    //output teks untuk meminta input pangkat
    printf("Masukkan Pangkat: ");
    //input pangkat untuk pemangkatan nilai
    scanf("%d", &pangkat);
    
    //looping untuk mengalikan nilai dengan pangkat yang ditampung pada hasil
    for(int i = 0; i < pangkat; i++) {
        hasil = hasil * nilai;
    }
    //output hasil operasi perpangkatan
    printf("\nHasil dari %d pangkat %d = %d\n", nilai,pangkat,hasil);
}







