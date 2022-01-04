#include <iostream>
#include <array>
#include <algorithm>
#include <cmath>
#include "random.hpp"
#include "esi.hpp"

using namespace std;
using namespace nvs;

template<size_t N>
void generate(array<int, N> &arr, int amount) {
    for(int i = 0; i < amount; i++) {
        arr.at(random_value(0, static_cast<int> (N - 1))) += 1;
    }
}

template<size_t N>
int sum(array<int, N> &arr) {
    int total = 0;
    for(int i = 0; i < static_cast<int> (N); i++) {
        total += arr.at(i);
    }
    return total;
}

template<size_t N>
void print(array<int, N> &arr) {
    int amount = sum(arr);
    for(int i = 0; i < static_cast<int> (N); i++) {
        cout << "nombre de " << i << " : " << arr.at(i) << " (" << static_cast<double>(arr.at(i)) / static_cast<double> (amount) * 100 << " %)" << endl;
    }
    cout << "total       : " << amount << " (" << amount / amount * 100 << "%)" << endl;
}

int main()
{
    randomize();
    array<int, 10> arr {};
    generate(arr, 1000000);
    print(arr);
    cout << endl;

    vector<int> data(20);
    generate(begin(data), end(data), []() {
        return random_value(-5, 5);
    });
    cout << "avant : " << endl;
    print(data);

    cout << "apres : (ascending) : " << endl;
    sort(data, true);
    print(data);

    cout << "apres : (!ascending) : " << endl;
    sort(data, false);
    print(data);

    vector<int> values(10);
    generate(begin(values), end(values), []() {
        return random_value(200, 400);
    });

    cout << "avant : " << endl;
    print(values);

    cout << "apres (croissant) : " << endl;
    sort(values.begin(), values.end());
    print(values);

    cout << "apres (decroissant) : " << endl;
    sort(values.begin(), values.end(), greater<int>());
    print(values);

    cout << "apres (modulo) :" << endl;
    sort(begin(values), end(values), [](int & a, int & b) {
        return a % 3 > b % 3 ? a > b : a < b;
    });
    print(values);

    map<unsigned, unsigned> result;
    //primeFactor(result, 120);
    for(int i = 12340; i <= 12350; i++) {
        primeFactor(result, i);
        unsigned sum {1};
        unsigned index {};

        for(const auto & [key, value] : result) {
            sum *= pow(key, value);
        }

        cout << sum << " = ";

        for(const auto & [key, value] : result) {
            index++;
            if(index >= result.size()) {
                cout << key << "^" << value;
            } else {
                cout << key << "^" << value << " * ";
            }
        }
        result.clear();
        cout << endl;
    }
}
