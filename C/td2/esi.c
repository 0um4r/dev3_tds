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

int compAscending(const void *first, const void *second) {
    int arg1 = *(const int *) first;
    int arg2 = *(const int *) second;
    int result = arg1 > arg2 ? 1 : -1;
    return result;
}

int compDescending(const void *first, const void *second) {
    int arg1 = * (const int *)first;
    int arg2 = * (const int *)second;
    int result = arg1 > arg2 ? -1 : 1;
    return result;
}

int compModulo(const void * first, const void *second) {
    int arg1 = *(const int *) first;
    int arg2 = *(const int *) second;
    int result = arg1 % 3 > arg2 % 3 ? 1 : -1;
    return result;
}

void arrayIntSortGeneric(int data [], unsigned nbElem, int (*comp)(const void *, const void *)) {
    for(unsigned first = 0; first <= nbElem; first++) {
        for(unsigned second = first + 1; second <= nbElem; second++) {
            if(comp(&data[first], &data[second]) > 0) {
                int tmp = data[first];
                data[first] = data[second];
                data[second] = tmp;
            }
        }
    }
}
