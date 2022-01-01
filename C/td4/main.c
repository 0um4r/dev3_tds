#include <stdio.h>
#include <stdlib.h>
#include "esi.h"

int main()
{
    unsigned number = 0;
    unsigned * factors = primeFactorsA(&number, 84);
    for(unsigned i = 0; i < number; i++) {
        printf("%d ", factors[i]);
    }
    printf("\n%d", number);
    free(factors);
}
