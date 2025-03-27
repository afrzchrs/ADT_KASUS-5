#include "menu.h"
#include "combineData.h"

void MainMenu() {
    system("cls");
    KotaElement k[5]; 
    int jumlahKota = 0; 
    int choice;

    while (1) {
        system("cls");
        printf("\n====== Customer Service =======:\n");
        printf("1. Tambah Data\n");
        printf("2. Hapus Data\n");
        printf("3. Tampilkan Data\n");
        printf("4. Keluar\n");
        printf("Pilih: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1:
                system("cls");
                subMenuTmbhData(k, &jumlahKota);
                break;
            case 2:
                system("cls");
                subMenuHpsData(k, &jumlahKota); 
                break;
            case 3:
                system("cls");
				tampilkanSemuaData(k, jumlahKota);
                break;
            case 4:
                return; 
            default:
                printf("Pilihan tidak valid!\n");
        }
        
        printf("\nTekan Enter untuk melanjutkan...");
        getchar();
    }
}

