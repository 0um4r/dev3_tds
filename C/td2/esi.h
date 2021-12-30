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
