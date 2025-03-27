#include "dataKota.h"

void inputKota(char *nama) {
    printf("Masukkan nama kota: ");
    scanf("%49s", nama); 
}

void tambahKota(KotaElement k[], int *jmlhKota) {
    KotaElement KotaBaru;

    inputKota(KotaBaru.kt); 
    KotaBaru.p = NULL; 

    k[*jmlhKota] = KotaBaru;
    (*jmlhKota)++;
    printf("Kota '%s' berhasil ditambahkan!\n", KotaBaru.kt);
}

void hapusKota(KotaElement k[], int *jmlhKota) {	
    char kotaHapus[50];
    inputKota(kotaHapus); 

    int i, found = -1;
    for (i = 0; i < *jmlhKota; i++) {
        if (strcmp(k[i].kt, kotaHapus) == 0) {
            found = i;
            break;
        }
    }

    if (found == -1) {
        printf("Kota '%s' tidak ditemukan!\n", kotaHapus);
        return;
    }

    
    while (k[found].p != NULL) {
        DelByValue(&k[found].p, k[found].p->info); 
    }

    
    for (i = found; i < (*jmlhKota) - 1; i++) {
        k[i] = k[i + 1];
    }

    (*jmlhKota)--;  
    printf("Kota '%s' berhasil dihapus beserta daftar nama yang terkait.\n", kotaHapus);
}


