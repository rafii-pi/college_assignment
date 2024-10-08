#include <stdio.h>

int main() {
    // Judul program
    printf("PROGRAM MENGHITUNG LUAS KUBUS\n\n");

    // Deklarasi variable untuk input user
    int rusuk;
    
    // Deklarasi variable untuk menampung nilai luas kubus
    int luas;

    // Teks untuk permintaan input dari user
    printf("Masukkan panjang rusuk : ");

    // Meminta input dari user
    scanf("%d", &rusuk);

    // Proses menghitung nilai luas dari sebuah kubus
    luas = 6 * rusuk * rusuk;
    
    //menampilkan output/keluarn dari luas
    printf("\njadi, luas dari kubus tersebut adalah %d",luas);
}
