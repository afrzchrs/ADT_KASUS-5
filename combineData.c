	#include "combineData.h"
	
	void tampilkanSemuaData(KotaElement k[], int jmlhKota) {
	    if (jmlhKota == 0) {
	        printf("Tidak ada data kota.\n");
	        return;
	    }
	
	    for (int i = 0; i < jmlhKota; i++) {
	        printf("\"%s\"", k[i].kt);
	
	        address current = k[i].p;
	        while (current != NULL) {
	            printf(" -> \"%s\"", current->info);
	            current = current->next;
	        }
	        printf("\n");
	    }
	}
