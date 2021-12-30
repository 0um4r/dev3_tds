#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include "esi.h"

int main()
{
    int data[] = {100,876,99999,27388,5};
    //arrayIntPrint(data, 4);
    //arrayIntSort(data, 4, false);
    //arrayIntPrint(data, 4);
    qsort(data, (sizeof(data) / sizeof(int)), sizeof (int), compAscending);
    arrayIntPrint(data, 4);
    printf("\n");
    qsort(data, (sizeof(data) / sizeof(int)), sizeof (int), compDescending);
    arrayIntPrint(data, 4);
    printf("\n");
    qsort(data, (sizeof(data) / sizeof(int)), sizeof (int), compModulo);
    arrayIntPrint(data, 4);
    printf("\n");
}
