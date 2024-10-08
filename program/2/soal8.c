#include <stdio.h>

int main(){
	//Soal 8 : Program Menukar Nilai Dua Variabel
	//Muhammad Rafi Fatihul Ihsan(24343016)
	
	//Judul program
	printf("PROGRAM MENUKAR NILAI DUA VARIABLE\n\n");
	//deklarasi variable a dan b sebgai penampung nilai
	int a, b;
	//deklarasi variable sebagai media untuk menukar nilai variable
	int change;
	
	//output text untuk input nilai pertama
	printf("Masukkan Nilai Pertama\t: ");
	//meminta input a(nilai pertama) dari user
	scanf("%d",&a);
	
	//output text untuk input nilai kedua
	printf("Masukkan Nilai Kedua\t: ");
	//meminta input b(nilai kedua) dari user
	scanf("%d",&b);
	
	//operasi menukarkan nilai variable
	change = a; //nilai change adalah a
	a = b;		//nilai a adalah b
	b = change;	//nilai b adalah b == a
	
	//menampilkan output pertukaran nilai variable
	printf("\nmenjadi,\n\nnilai pertama\t= %d\nnilai kedua\t= %d", a,b);
}
