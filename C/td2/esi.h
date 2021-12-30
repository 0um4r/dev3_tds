#ifndef ESI_H
#define ESI_H

#endif // ESI_H

/**
 * @brief arrayIntPrint affiche sur la sortie standard les nbElem premiers éléments du tableau.
 * @param data un tableau d'entiers constant
 * @param nbElem un entier non signé
 */
void arrayIntPrint(const int data [], unsigned nbElem);

/**
 * @brief arrayIntSort trie les nbElem premiers éléments de data dans l'ordre croissant ou décroissant.
 * @param data un tableau d'entiers constant
 * @param nbElem un entier non signé
 * @param ascending un booleén
 */
void arrayIntSort(int data [], unsigned nbElem, _Bool ascending);

/**
 * @brief compAscending compare si la première valeur est supérieur à la deuxième
 * @param first un pointeur générique constant
 * @param second un pointeur générique constant
 * @return un nombre positif si la premiere valeur est supérieur à la deuxième, un nombre négatif le cas contraire
 */
int compAscending(const void *first, const void *second);

/**
 * @brief compDescending compare si la première valeur est inférieur à la deuxième
 * @param first un pointeur générique constant
 * @param second un pointeur générique constant
 * @return un nombre positif si la premiere valeur est inférieur à la deuxième, un nombre négatif le cas contraire
 */
int compDescending(const void *first, const void *second);

/**
 * @brief compModulo compare si la première valeur modulo 3 est supérieur à la deuxième valeur modulo 3
 * @param first un pointeur générique constant
 * @param second un pointeur générique constant
 * @return un nombre positif si la premiere valeur modulo 3 est supérieur à la deuxième valeur modulo 3, un nombre négatif le cas contraire
 */
int compModulo(const void * first, const void *second);
