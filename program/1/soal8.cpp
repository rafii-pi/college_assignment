#include <stdio.h>


int main(){
	int count = 0;											//variabel pemberi nomor
	int numbers[5] = {1, 2, 3, 4, 5};						//kumpulat data
	for (int i = 0; i < 5; i++){							//perulangan
		count += 1;											//nilai count bertambah seiring berjalannya looping
		printf("List data ke-%d = %d\n",count,numbers[i]);	//menampilkan nilai dari list secara berurutan
	}
	return 0;
	//Soal 8: Array dan Tipe Data
	//Muhammad Rafi Fatihul Ihsan(24343016) - Informatika
}
