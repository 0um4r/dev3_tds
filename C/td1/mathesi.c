#include "mathesi.h"
#include <stdio.h>

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

void printPrimeFactor(unsigned int number, bool showPower) {
    unsigned divisor = 1;
    printf("%u = ", number);
    // vérifier si il faut afficher la puissance ou pas
    if(!showPower) {
        // tant que le nombre n'a pas été diviser complètement
        while(number > 1) {
            // vérifier que le diviseur est un nombre premier
            if(isPrime(divisor)) {
                // tant que le diviseur peut diviser le nombre
                while(number % divisor == 0 && number > 0) {
                    // diviser le nombre
                    number = number / divisor;
                    // l'afficher
                    printf(" %u ", divisor);
                    number != 1 ? printf(" x ") : printf("");
                }
            }
            // incrémenter le diviseur
            divisor++;
        }
    } else {
        unsigned power = 0;
        // tant que le nombre n'a pas été diviser complètement
        while(number > 1) {
            // vérifier que le diviseur est un nombre premier
            if(isPrime(divisor)) {
                // tant que le diviseur peut diviser le nombre
                while(number % divisor == 0 && number > 0) {
                    // incrémenter la puissance
                    power++;
                    number = number / divisor;
                    // si le nombre ne peut plus être diviser
                    if(number % divisor != 0) {
                        // vérifier si la puissance est supérieur à 2
                        if(power >= 2) {
                            // si oui, l'afficher avec la puissance
                            printf(" %u^%u ", divisor, power);
                        } else {
                            // sinon, affichage simple sans puissance
                            printf(" %u ", divisor);
                        }
                        number != 1 ? printf(" x ") : printf("");
                        // remettre la puissance à sa valeur initial
                        power = 0;
                    }
                }
            }
            // incrémenter le diviseur
            divisor++;
        }
    }
}

unsigned gcd(unsigned a, unsigned b) {
    if(b != 0) {
        gcd(b, a % b);
    } else if(a < b) {
        gcd(b, a);
    } else {
        return a;
    }
}
