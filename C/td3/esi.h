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

/**
 * @brief xstrcpy copie les chaînes de caractères de 'src' vers 'dest'
 * @param dest pointeur de char constant
 * @param src pointeur de char constant
 * @return la destination dans laqeul toutes les caractères de source sont copier
 */
char * xstrcpy(char * dest, const char * src);

/**
 * @brief xstrncpy copie 'count' chaînes de caractères de 'src' vers 'dest'
 * @param dest pointeur de char constant
 * @param src pointeur de char constant
 * @param count entier on signé
 * @return
 */
char * xstrncpy(char * dest, const char * src, size_t count);
