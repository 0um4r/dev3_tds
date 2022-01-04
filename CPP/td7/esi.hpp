#ifndef ESI_H
#define ESI_H

#endif // ESI_H

#include <vector>
#include <map>

/**
 * @brief print Permet d'afficher les éléments d'un vector donner en paramètre.
 * @param data vector d'entier
 */
void print(const std::vector<int> & data);

/**
 * @brief sort Permet de trier les éléments d'un vector dans l'ordre croissant ou décroissant.
 * @param data vector d'entier
 * @param ascending booléen
 */
void sort(std::vector<int> & data, bool ascending);

/**
 * @brief primeFactor décompose 'value' en produit de facteurs premiers.
 * @param result map de clé non signé et valeur non signé
 * @param value entier non signé
 */
unsigned primeFactor(std::map<unsigned, unsigned> & result, unsigned value);

/**
 * @brief isPrime vérifie que 'value' est un nombre premier.
 * @param value entier non signé
 * @return
 */
bool isPrime(unsigned value);
