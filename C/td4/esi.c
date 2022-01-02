#include "esi.h"
#include <stdlib.h>
#include <stdio.h>

unsigned * primeFactorsA(unsigned * count, unsigned number) {
    unsigned factors = countFactors(number);
    *count = factors;
    unsigned divisor = 0;
    unsigned index = 0;
    unsigned * allocate = malloc(factors * sizeof(unsigned));
    while(number > 1) {
        if(isPrime(divisor)) {
            if(number % divisor == 0) {
                number = number / divisor;
                allocate[index] = divisor;
                index++;

                while(number % divisor == 0 && number > 0) {
                    number = number / divisor;
                    allocate[index] = divisor;
                    index++;
                }
            }
        }
        divisor++;
    }
    return allocate;
}

unsigned primeFactorsB(unsigned * * factor, unsigned * * multiplicity, unsigned number) {
    unsigned total = 0;
    * factor = factors(number, &total);
    * multiplicity = multiplicities(number, &total);
    return total;
}

_Bool isPrime(unsigned number) {
    if(number >= 2) {
        unsigned count = 2;
        while(count < number) {
            if(number % count == 0) {
                return 0;
            }
            count++;
        }
    } else {
        return 0;
    }
    return 1;
}

unsigned countFactors(unsigned number) {
    unsigned count = 0;
    unsigned divisor = 1;
    while(number > 1) {
        if(isPrime(divisor)) {
            if(number % divisor == 0) {
                number = number / divisor;
                count++;
            }

            while(number % divisor == 0) {
                number = number / divisor;
                count++;
            }
        }
        divisor++;
    }
    return count;
}

unsigned * factors(unsigned number, unsigned * count) {
    unsigned * allocate = (unsigned *) malloc(sizeof(unsigned));
    unsigned divisor = 0;
    unsigned index = 0;
    while(number > 1) {
        if(isPrime(divisor)) {
            if(number % divisor == 0 && number != 0) {
                number = number / divisor;
                allocate = (unsigned *) realloc(allocate, sizeof(unsigned));
                allocate[index] = divisor;
                * count = * count + 1;
                index++;
                while(number % divisor == 0 && number > 0) {
                    number = number / divisor;
                }
            }
        }
        divisor++;
    }
    return allocate;
}

unsigned * multiplicities(unsigned number, unsigned * count) {
    unsigned * allocate = (unsigned *) malloc(sizeof(unsigned));
    unsigned divisor = 0;
    unsigned index = 0;
    unsigned multiple = 1;
    while(number > 1) {
        if(isPrime(divisor)) {
            if(number % divisor == 0) {
                number = number / divisor;
                while(number % divisor == 0 && number > 0) {
                    number = number / divisor;
                    multiple++;
                }
            }
            allocate = (unsigned *) realloc(allocate, sizeof(unsigned));
            allocate[index] = multiple;
            * count = * count + 1;
            index++;
            if(multiple != 1) {
                multiple = 1;
            }
        }
        divisor++;
    }
    return allocate;
}

void print(unsigned size, unsigned * * allocated) {
    for(unsigned i = 0; i < size; i++) {
        printf("%d ", (*allocated)[i]);
    }
    printf("\n");
}
