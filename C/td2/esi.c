#include "esi.h"
#include <stdio.h>
#include <stdbool.h>

void arrayIntPrint(const int data [], unsigned nbElem) {
    for(unsigned i = 0; i <= nbElem; i++) {
        printf("%d \n", data[i]);
    }
}

void arrayIntSort(int data[], unsigned nbElem, bool ascending) {
    for(unsigned first = 0; first <= nbElem; first++) {
        for(unsigned second = first + 1; second <= nbElem; second++) {
            if(!ascending) {
                if(data[first] < data[second]) {
                    unsigned tmp = data[first];
                    data[first] = data[second];
                    data[second] = tmp;
                }
            } else {
                if(data[first] > data[second]) {
                    unsigned tmp = data[second];
                    data[second] = data[first];
                    data[first] = tmp;
                }
            }
        }
    }
}
