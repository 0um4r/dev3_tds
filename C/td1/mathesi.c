#include "mathesi.h"

bool isPrime(unsigned int number) {
    unsigned count = 2;
    // si le nombre est inférieur alors -> pas premier (de toute façon un nombre doit être supérieur pour voir si il est premier)
    if(number < 2) {
        return false;
        // si le nombre est supérieur à 2 -> tester si il est premier
    } else {
        while(count < number) {
            // si le nombre possède est divisible -> pas premier
            if(number % count == 0) {
                return false;
            }
            count++;
        }
    }
    // si le nombre n'est pas divisible alors ces seuls diviseurs sont 1 et 'number'
    return true;
}
