#include <stdio.h>
#define G 9.8
#define W(m) m*G

int main(){
	float hasil = W(6);							//rumus --> w = m x g(9,8) dengan g sebagai ketetapan
	printf("W = %d x %.1f = %.2f",6,G,hasil);	//memunculkan 9,8 hanya perlu menuliskan G
	return 0;
	//Soal 6: Penggunaan Konstanta
	//Muhammad Rafi Fatihul Ihsan(24343016) - Informatika
}
