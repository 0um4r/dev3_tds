#include "esi.h"

size_t xstrlen(const char * chaine) {
    int cpt = 0;
    while(chaine[cpt] != 0) {
        cpt++;
    }
    return cpt;
}
