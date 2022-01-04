#include <iostream>
#include "esi.hpp"

void print(const std::vector<int> & data) {
    for(int i = 0; i < static_cast<int> (data.size()); i++) {
        std::cout << data.at(i) << " ";
    }
    std::cout << std::endl;
}

void sort(std::vector<int> & data, bool ascending) {
    int tmp;
    for(int first = 0; first < static_cast<int> (data.size()); first++) {
        for(int second = first + 1; second < static_cast<int> (data.size()); second++) {
            if(ascending) {
                if(data.at(first) > data.at(second)) {
                    tmp = data.at(first);
                    data.at(first) = data.at(second);
                    data.at(second) = tmp;
                }
            } else {
                if(data.at(first) < data.at(second)) {
                    tmp = data.at(second);
                    data.at(second) = data.at(first);
                    data.at(first) = tmp;
                }
            }
        }
    }
}

unsigned primeFactor(std::map<unsigned, unsigned> & result, unsigned value) {
    unsigned count = 0;
    if(value == 0 || value == 1) {
        return 0;
    } else {
        unsigned divisor = 2;
        unsigned multiple = 0;
        while(value > 1) {
            if(isPrime(divisor)) {
                count++;
                if(value % divisor == 0) {
                    while(value % divisor == 0) {
                        value = value / divisor;
                        multiple++;
                    }
                    if(multiple >= 1) {
                        result[divisor] = multiple;
                        multiple = 0;
                    } else {
                        result[divisor] = multiple;
                    }
                }
            }
            divisor++;
        }
    }
    return count;
}

bool isPrime(unsigned value) {
    if(value < 2) {
        return false;
    } else {
        for(unsigned i = 2; i < value; i++) {
            if(value % i == 0) {
                return false;
            }
        }
    }
    return true;
}
