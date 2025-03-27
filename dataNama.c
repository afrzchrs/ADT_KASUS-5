#include "dataNama.h"

void hapusNamaDariKota(KotaElement k[], int jumlahKota) {
    if (jumlahKota == 0) {
        printf("Belum ada kota untuk menghapus nama!\n");
        return;
    }

    printf("Pilih kota:\n");
    for (int i = 0; i < jumlahKota; i++) {
        printf("%d. %s\n", i + 1, k[i].kt);
    }

    int pilihKota;
    printf("Masukkan nomor kota: ");
    scanf("%d", &pilihKota);
    getchar(); 

    if (pilihKota < 1 || pilihKota > jumlahKota) {
        printf("Pilihan tidak valid!\n");
        return;
    }

    hapusNama(&k[pilihKota - 1].p);
}


void tambahNamaKeKota(KotaElement k[], int jumlahKota) {
    if (jumlahKota == 0) {
        printf("Belum ada kota untuk menambahkan nama!\n");
        return;
    }

    printf("Pilih kota:\n");
    for (int i = 0; i < jumlahKota; i++) {
        printf("%d. %s\n", i + 1, k[i].kt);
    }

    int pilihKota;
    printf("Masukkan nomor kota: ");
    scanf("%d", &pilihKota);
    getchar(); // bersihkan newline

    if (pilihKota < 1 || pilihKota > jumlahKota) {
        printf("Pilihan tidak valid!\n");
        return;
    }

    tambahNama(&k[pilihKota - 1].p);
}

void inputNama(char *nama) {
    printf("Masukkan nama: ");
    scanf("%49s", nama); 
}

void buatNode(address *p) {
    Create_Node(p); 
}

void tambahNama(address *listNama) {
    char nama[50];
    inputNama(nama);

    address PNew;
    buatNode(&PNew);
    Isi_Node(&PNew, nama);
    Ins_Akhir(listNama, PNew);
}

void hapusNama(address *listNama) {
    char nama[50];
    printf("Masukkan nama yang ingin dihapus: ");
    fgets(nama, 50, stdin);
    nama[strcspn(nama, "\n")] = '\0';

    DelByValue(listNama, nama);
}


