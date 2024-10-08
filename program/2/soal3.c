#include <stdio.h>

int main(){
	//Soal 3 : Mengonversi suhu dari celcius ke fahrenheit
	//Muhammad Rafi Fatihul Ihsan(24343016)
	
	//Judul program
	printf("PROGRAM KONVERSI SUHU\n\n");
	//deklarasi variable float celcius karena suhu bisa bernilai koma
	float celcius;
	//deklarasi variable fahrenheit bertipe float karena output bisa berupa nilai koma
	float fahrenheit;
	
	//output text untuk input
	printf("Masukkan suhu dalam celcius(ex:24) : ");
	//meminta input dari user tipe float
	scanf("%f",&celcius);
	
	//mengoversi suhu dari celcius ke fahrenheit
	fahrenheit = (celcius * 9 / 5) + 32;
	
	//menampilkan output dari konversi celcius ke fahrenheit
	printf("\njadi, suhu %.1f celcius jika dikonversi menjadi %.1f fahrenheit", celcius,fahrenheit);
}
