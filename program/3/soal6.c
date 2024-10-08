#include <stdio.h>

int main(){
	int data, terkecil, terbesar;
	float rata_rata;
	scanf("%d", &data);
	int nilai[data];
	for(int i = 0; i < data; i++){
		scanf("%d", &nilai[i]);
		rata_rata = rata_rata + nilai[i];
	}
	for(int j = -1; j < data; j++){
		for(int k = j+1; k<data; k++){
			if(nilai[j]<nilai[k]){
				terkecil = nilai[j];
			}
			if(nilai[j]>nilai[k]){
				terbesar = nilai[j];
			}
		}
	}
	for(int i=0;i<data;i++){
		printf("%d  ",nilai[i]);
	}
	printf("\nterkecil %d",terkecil);
	printf("\nterbesar %d",terbesar);
	printf("\nrata-rata %.2f",rata_rata/data);
}




