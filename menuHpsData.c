#include "menuHpsData.h"

void subMenuHpsData(KotaElement k[], int *jumlahKota) {
    int choice;

    while (1) {
        printf("\n====== Pilih Data Untuk Dihapus =======:\n");
        printf("1. Hapus Data Kota\n");
        printf("2. Hapus Data Nama\n");
        printf("3. Kembali\n");
        printf("Pilih: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                system("cls");
                hapusKota(k, jumlahKota); 
                break;
            case 2:
		system("cls");
		hapusNamaDariKota(k, *jumlahKota);
		break;
            case 3:
                return; 
            default:
                printf("Pilihan tidak valid!\n");
        }
    }
}

