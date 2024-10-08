#include <stdio.h>

int main(){
	int angka_konversi = 123, karak = 3;
	
	float koma = float(angka_konversi) + 0.45;				//mengubah tipe data integer menjadi float
	printf("dari %d menjadi %.2f\n",angka_konversi,koma);	//kemudian dijumlahkan dengan 0,45
	
	int bulat = int(koma);									//mengubah tipe data float menjadi integer
	printf("dari %.2f menjadi %d\n",koma,bulat);
	
	double pecahan = double(bulat) + 0.12;					//mengubah tipe data integer menjadi float
	printf("dari %d menjadi %.2lf\n",bulat,pecahan);		//kemudian dijumlahkan dengan 0,12
	
	char karakter = char(karak);							//mengubah tipe data integer menjadi char
	printf("dari %d menjadi %c",angka_konversi,karakter);	//outputnya berupa simbol-simbol
	
	//Soal 4: Konversi Tipe Data
	//Muhammad Rafi Fatihul Ihsan(24343016) - Informatika
}
