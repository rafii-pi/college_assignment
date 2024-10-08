#include <stdio.h>
#include <math.h>

int main(){
	// Studi Kasus 2
	//Muhammad Rafi Fatihul Ihsan(24343016)
	printf("\nPROGRAM MENGHITUNG DETERMINAN");
	printf("\n--------------------------------\n");
	//deklarasi variabel untuk menampung input dengan variabel D sebagai menampung hasil operasi
	float a, b, c, D;
	float x1, x2;
	//output teks untuk input a
	printf("nilai a : ");
	//input a dari user
	scanf("%f",&a);
	//output teks untuk input b
	printf("nilai b : ");
	//input b dari user
	scanf("%f",&b);
	//output teks untuk input c
	printf("nilai c : ");
	//input c dari user
	scanf("%f",&c);
	
	//ax2 + bx + c = 0
	D = b * 2 - (4*(a*c));
	if(D == 0){
		//kondisi jika D bernilai == 0 maka akan melakukan operasi dibawah
		x1 = x2 = -b / (2*a);
	}
	else if(D > 0){
		//kondisi jika D bernilai == 0 maka akan melakukan operasi dibawah
		x1 = (-b + sqrt(D)) / 2*a;
		x2 = (-b - sqrt(D)) / 2*a;
	}
	else{
		//kondisi jika D bernilai == 0 maka akan melakukan operasi dibawah
		x1 = -b / (2*a) + (sqrt(-D)) / (2*a);
		x2 = -b / (2*a) - (sqrt(-D)) / (2*a);
	}
	printf("\nx1 = %.2f\tx2 = %.2f",x1,x2);
}

