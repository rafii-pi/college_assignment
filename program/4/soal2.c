#include <stdio.h>

int main() {
    // Judul program
    printf("PROGRAM BILANGAN GANJIL/GENAP\n\n");

    // Deklarasi variable untuk input user
    int bilangan;
    
    // Deklarasi variable untuk mengecek suatu bilangan
    int cek;

    // Teks untuk permintaan input dari user
    printf("Masukkan sebuah bilangan : ");

    // Meminta input dari user
    scanf("%d", &bilangan);

    // Proses modulo untuk mengecek sebuah bilangan
    cek = bilangan % 2;

    // Kondisi untuk memeriksa apakah bilangan ganjil/genap
    if (cek == 0) {
        // Output untuk menyatakan bilangan genap
        printf("\n%d adalah bilangan genap.\n", bilangan);
    } else {
        // Output untuk menyatakan bilangan ganjil
        printf("\n%d adalah bilangan ganjil.\n", bilangan);
    }
}
