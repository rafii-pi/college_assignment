#include <stdio.h>
int main(){
	int num1; float num2;
	printf("bilangan bulat\t: ");
	scanf("%d", &num1);
	printf("bilangan pecahan: ");
	scanf("%f", &num2);
	
	float sum1 = num1 + num2;		//penjumlahan dengan hasil bertipe float
	printf("\nHasil bertipe float\t= %.2f\n", sum1);
	
	int sum2 = num1 + num2;		//penjumlahan dengan hasil bertipe float
	printf("hasil bertipe integer\t= %d\n", sum2);

	return 0;
	//Soal 9: Tipe Data dan Konversi
	//Muhammad Rafi Fatihul Ihsan(24343016) - Informatika
}
