#include "linkedlist.h"

#ifndef DATAKOTA_H
#define DATAKOTA_H

typedef struct {
    infotype kt;
    address p;
} KotaElement;

void tambahKota(KotaElement k[], int *jmlhKota);
void hapusKota(KotaElement k[], int *jmlhKota);
void inputKota(char *nama);

#endif

