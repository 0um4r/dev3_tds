#ifndef ESI_H
#define ESI_H

#endif // ESI_H
#include <stddef.h>

/**
 * @brief xstrlen retourne le nombre de caractères d'une chaîne de caractère
 * @param chaine pointeur de char constant
 * @return le nombre de caractères d'une chaîne de caractère
 */
size_t xstrlen(const char * chaine);

/**
 * @brief xstrcmp compare 2 chaînes de caractères lexicographiquement
 * @param lhs pointeur de char constant
 * @param rhs pointeur de char constant
 * @return une valeur négative si lhs apparaît avant rhs, zéro si égaux sinon positive
 */
int xstrcmp(const char * lhs, const char * rhs);
