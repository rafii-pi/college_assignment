#include <stdio.h>

int main(){
	// Studi Kasus 6
	//Muhammad Rafi Fatihul Ihsan(24343016)
	printf("\nPROGRAM DAFTAR NILAI MAHASISWA");
	printf("\n--------------------------------\n");
	
	//deklarasi variabel untuk jumlah data dan count sebagai penomoran
    int data, count = 1;
    //deklarasi variabel untuk mementukan nilai terbesar dan terkecil
    int terkecil, terbesar;
    //deklarasi tempat untuk manampung nilai rata-rata
    float rata_rata = 0; //dengan nilai awal = 0
    
    //output teks untuk input jumlah data yang akan diinput
    printf("Masukkan jumlah data: ");
    //input jumlah data yang akan dimasukkan
    scanf("%d", &data);
    printf("--------------------------------\n");
    
    //deklarasi variabel array/list nilai dengan jumlah banyak data
    int nilai[data]; // deklarasi array dengan ukuran data
    
    //looping untuk memasukkan subnilai didalam array nilai
    for (int i = 0; i < data; i++){
    	printf("Masukkan Nilai ke-%d : ",count);
    	//input jumlah subnilai sebanyak banyak data
        scanf("%d", &nilai[i]);
        //operasi penjumlahan subnilai didalam array
        rata_rata += nilai[i];
        //penomoran nilai
        count += 1;
    }
    
    //Inisialisasi bil.terkecil dan terbesar dengan elemen array ke[i]
    terkecil = nilai[0];
    terbesar = nilai[0];
    
    //perulangan untuk mengecek bilangan terkecil
    for(int i = 0; i < data; i++){
    	//kondisi untuk memeriksa apakah bil.pertama dengan bil.setelahnya
        if (nilai[i] < terkecil){
        	//jika nilai ke i lebih kecil dari nilai terkecil
            terkecil = nilai[i]; //maka update nilai terkecil
        }
        if (nilai[i] > terbesar){
        	//jika nilai ke i lebih besar dari nilai terkecil
            terbesar = nilai[i]; // Update nilai terbesar
        }
    }
    //output untuk nilai terkecil
    printf("\nNilai Terkecil : %d", terkecil);
    //output untuk nilai terbesar
    printf("\nNilai Terbesar : %d", terbesar);
    //output untuk nilai rata rata (rata rata / jumlah data)
    printf("\nNilai Rata-rata: %.2f\n", rata_rata / data);
	
    return 0;
}