#ifndef MATHESI_H
#define MATHESI_H

#endif // MATHESI_H

namespace std {
template<
        class T1,
        class T2
        > struct pair;
}

bool isPrime(unsigned number);

std::pair<int, int> euclidianDivision(int dividend, int divisor);

void printPrime(unsigned min, unsigned max);

void printEuclidianDivision(int dividend);
