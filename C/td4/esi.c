#include "esi.h"
#include <stdlib.h>

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

                while(number % divisor == 0) {
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

            while(number % divisor == 0 && number != 0) {
                number = number / divisor;
                count++;
            }
        }
        divisor++;
    }
    return count;
}
