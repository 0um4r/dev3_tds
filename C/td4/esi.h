#ifndef ESI_H
#define ESI_H

#endif // ESI_H

/**
 * @brief primeFactorsA crée et retourne une zone dynamiquement allouée d'unsigned dont le contenu est l'ensemble des facteurs premiers
 * @param count pointeur d'entier non signé
 * @param number entier non signé
 * @return une zone dynamiquement allouée d'unsigned dont le contenu est l'ensemble des facteurs premiers
 */
unsigned * primeFactorsA(unsigned * count, unsigned number);

/**
 * @brief isPrime vérifie que le nombre donner en paramètre est premier.
 * @param number entier non signé
 * @return vrai si le nombre donner en paramètre est premier, sinon faux
 */
_Bool isPrime(unsigned number);

/**
 * @brief countFactors compte le nombre de facteurs premiers du nombre donner en paramètre.
 * @param number entier non signé
 */
unsigned countFactors(unsigned number);
