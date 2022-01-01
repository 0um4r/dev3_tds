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

char * xstrcpy(char * dest, const char * src) {
    int cpt = 0;
    while(cpt <= (int) xstrlen(src)) {
        dest[cpt] = src[cpt];
        cpt++;
    }
    return dest;
}

char * xstrncpy(char * dest, const char * src, size_t count) {
    size_t cpt = 0;
    while(cpt < count && cpt <= xstrlen(src)) {
        dest[cpt] = src[cpt];
        cpt++;
    }
    return dest;
}

char * xstrcat(char * dest, const char * src) {
    int index = 0;
    while(src[index] != 0) {
        dest[xstrlen(dest)] = src[index];
        index++;
    }
    return dest;
}
