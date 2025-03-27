#include "linkedlist.h"
#include "dataKota.h"

#ifndef DATANAMA_H
#define DATANAMA_H

typedef address dataNama;

void inputNama(char *nama);
void buatNode(address *p);
void tambahNama(address *listNama);
void hapusNama(address *listNama);
void tambahNamaKeKota(KotaElement k[], int jumlahKota);
void hapusNamaDariKota(KotaElement k[], int jumlahKota);
	

#endif

