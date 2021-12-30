#ifndef MATHESI_H
#define MATHESI_H

#endif // MATHESI_H
#include <stdbool.h>

/**
 * @brief isPrime vérifie si un nombre est premier. Vérifie que le nombre donnée en paramètre est premier ou pas.
 * @param number un entier non signé
 * @return vrai si le nombre est premier sinon false
 */
bool isPrime(unsigned int number);

/**
 * @brief printPrimeFactor affiche la décomposition d'un nombre en un produit de facteurs premiers. En outre l'affichage peut afficher
 * une décomposition en notant les puissances ou pas
 * @param number un entier non signé
 * @param showPower un booléan indiquant si les puissances doivent être afficher ou pas
 */
void printPrimeFactor(unsigned int number, bool showPower);

/**
 * @brief gcd calcule le plus grand commun diviseur.
 * @param a un entier non signé
 * @param b un entier non signé
 */
unsigned gcd(unsigned a, unsigned b);
