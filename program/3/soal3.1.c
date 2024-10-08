#include <stdio.h>

#define PI 3.14159

int main() {
    int kondisi;

    printf("Pilih Menu Operasi\n1. Menghitung Volume Kubus\n2. Menghitung Luas Lingkaran\n3. Menghitung Volume Silinder\npilih nomor(1/2/3) : ");
    scanf("%d", &kondisi);

    switch (kondisi) {
        case 1:
            int sisi_kubus;
            printf("Masukkan sisi kubus: ");
            scanf("%d", &sisi_kubus);
            if (sisi_kubus <= 0) {
                printf("Sisi kubus harus positif!\n");
                return 1;
            }
            double volume_kubus = (double)sisi_kubus * sisi_kubus * sisi_kubus;
            printf("Volume kubus: %.2lf\n", volume_kubus);
            break;

        case 2:
            double jari_lingkaran;
            printf("Masukkan jari-jari lingkaran: ");
            scanf("%lf", &jari_lingkaran);
            if (jari_lingkaran <= 0) {
                printf("Jari-jari lingkaran harus positif!\n");
                return 1;
            }
            double luas_lingkaran = PI * jari_lingkaran * jari_lingkaran;
            printf("Luas lingkaran: %.2lf\n", luas_lingkaran);
            break;

        case 3:
            double jari_lingkaran, tinggi_silinder;
            printf("Masukkan jari-jari silinder: ");
            scanf("%lf", &jari_lingkaran);
            if (jari_lingkaran <= 0) {
                printf("Jari-jari silinder harus positif!\n");
                return 1;
            }

            printf("Masukkan tinggi silinder: ");
            scanf("%lf", &tinggi_silinder);
            if (tinggi_silinder <= 0) {
                printf("Tinggi silinder harus positif!\n");
                return 1;
            }

            double volume_silinder = PI * jari_lingkaran * jari_lingkaran * tinggi_silinder;
            printf("Volume silinder: %.2lf\n", volume_silinder);
            break;

        default:
            printf("Kesalahan input!\n");
            break; // Add break statement here
    }

    return 0;
}