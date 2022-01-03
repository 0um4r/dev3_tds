#include "mathesi.h"
#include <utility>
#include <iostream>
#include <iomanip>

bool isPrime(unsigned number) {
    for(unsigned val = 2; val < number; val++) {
        if(number % val == 0) {
            return false;
        }
    }
    return true;
}

std::pair<int, int> euclidianDivision(int dividend, int divisor) {
    std::pair<int, int> result;
    result.first = dividend / divisor;
    result.second = dividend % divisor;
    return result;
}

void printPrime(unsigned min, unsigned max) {
    unsigned newline = 10;
    unsigned count = 0;
    std::cout << "Les nombres premiers entre 200 et 349 : " << std::endl;
    for(unsigned val = min; val <= max; val++) {
        if(count == newline) {
            newline += 10;
            std::cout << std::endl;
        }
        if(isPrime(val)) {
            std::cout << std::setw(-4) << val;
        } else {
            std::cout << " . ";
        }
        count++;
    }
    std::cout << std::endl;
}

void printEuclidianDivision(int dividend) {
    std::pair<int, int> result;
    for(int i = 0; i <= dividend; i++) {
        if(i == 0) {
            std::domain_error("euclidianDivision : division by zero");
        } else {
            result = euclidianDivision(dividend, i);
            std::cout << dividend << " = " << result.first << " * " << i << " + " << result.second << std::endl;
        }
    }
}
