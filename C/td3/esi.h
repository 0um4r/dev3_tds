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
 * @param dest pointeur de char
 * @param src pointeur de char constant
 * @return la destination dans laqeul toutes les caractères de source sont copier
 */
char * xstrcpy(char * dest, const char * src);

/**
 * @brief xstrncpy copie 'count' chaînes de caractères de 'src' vers 'dest'
 * @param dest pointeur de char
 * @param src pointeur de char constant
 * @param count entier on signé
 * @return
 */
char * xstrncpy(char * dest, const char * src, size_t count);

/**
 * @brief xstrcat copie les chaînes de caractères de 'src' à la fin de 'dest'.
 * @param dest pointeur de char
 * @param src pointeur de char constant
 * @return la destination dans laquel toutes les chaînes de caractères de 'src' ont été copier à la fin de 'dest'
 */
char * xstrcat(char * dest, const char * src);

/**
 * @brief xstrncat copie 'count' chaînes de caractères de 'src' à la fin de 'dest'.
 * @param dest pointeur de char
 * @param src pointeur de char constant
 * @param count entier non signé
 * @return la destination dans laquel 'count' chaînes de caractères ont été copié depuis 'src'
 */
char * xstrncat(char * dest, const char * src, size_t count);

/**
 * @brief xstrtok parcours la chaîne de caractère et s'arrête au premier délimiteur.
 * @param str pointeur de char
 * @param delim pointeur de char constant
 * @return la chaîne de caractère du début jusqu'au délimiteur
 */
char * xstrtok(char * str, const char * delim);
