#include <stdio.h>
#include <stdlib.h>
#include "esi.h"

int main()
{
    unsigned number = 0;
    unsigned * factorss = primeFactorsA(&number, 2339);
    for(unsigned i = 0; i < number; i++) {
        printf("%d ", factorss[i]);
    }
    printf("\n%d\n", number);

    unsigned * factor = NULL;
    unsigned * multiplicity = NULL;

    primeFactorsB(&factor, &multiplicity, 84);
    print(3, &factor);
    print(2, &multiplicity);

    free(factorss);
    free(factor);
    free(multiplicity);
}
