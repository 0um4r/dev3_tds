#include <stdio.h>
#include <stdbool.h>
#include "esi.h"

int main()
{
    int data[] = {100,876,99999,27388,5};
    //arrayIntPrint(data, 4);
    arrayIntSort(data, 4, false);
    arrayIntPrint(data, 4);
}
