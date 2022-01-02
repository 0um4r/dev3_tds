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
 * @brief primeFactorsB décompose number en facteurs premiers et stock les facteurs premiers dans 'factor' et leurs multiplicités dans 'multiplicity'
 * @param factor pointeur de pointeur d'entier non signé
 * @param multiplicity pointeur de pointeur d'entier non signé
 * @param number entier non signé
 */
unsigned primeFactorsB(unsigned * * factor, unsigned * * multiplicity, unsigned number);

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

/**
 * @brief factors crée et retourne une zone mémoire dynamiquement alloué et stock les facteurs premiers du nombre donner en paramètre.
 * @param number entier non signé
 * @param count pointeur d'entier non signé
 * @return une zone mémoire dynamiquement alloué
 */
unsigned * factors(unsigned number, unsigned * count);

/**
 * @brief multiplicity crée et retourne une zone mémoire dynamiquement alloué et stock les multiplicités du nombre donner en paramètre.
 * @param number entier non signé
 * @param count pointeur d'entier non signé
 * @return une zone mémoire dynamiquement alloué
 */
unsigned * multiplicities(unsigned number, unsigned * count);

/**
 * @brief print affiche les éléments d'une zone dynamiquement alloué.
 * @param size entier non signé
 * @param allocated pointeur de pointeur d'entier non signé
 */
void print(unsigned size, unsigned * * allocated);
