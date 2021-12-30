#include "esi.h"

size_t xstrlen(const char * chaine) {
    int cpt = 0;
    while(chaine[cpt] != 0) {
        cpt++;
    }
    return cpt;
}

int xstrcmp(const char * lhs, const char * rhs) {
    int cpt = 0;
    while(cpt < (int) xstrlen(lhs) || cpt < (int) xstrlen(rhs)) {
        if(lhs[cpt] > rhs[cpt]) {
            return 1;
        } else if(lhs[cpt] < rhs[cpt]) {
            return -1;
        }
        cpt++;
    }
    return 0;
}
