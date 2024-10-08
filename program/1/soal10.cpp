#include <stdio.h>
#include <string.h>

struct Person{
	char name[10], alamat[10];
	int age;
	float height;
 };

int main() {
	Person person1;

	strcpy(person1.name, "Rafi");
	person1.age = 18;
	person1.height = 172.5;
	strcpy(person1.alamat, "Riau");
	
	printf("Nama\t: %s\n", person1.name);
	printf("Usia\t: %d tahun\n", person1.age);
	printf("Tinggi\t: %.1f cm\n", person1.height);
	printf("Alamat\t: %s\n", person1.alamat);
	return 0;
	//Soal 10: Struktur Data
	//Muhammad Rafi Fatihul Ihsan(24343016) - Informatika	
}











