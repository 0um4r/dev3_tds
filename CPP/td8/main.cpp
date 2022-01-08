#include <iostream>
#include "polynomial.h"

using namespace std;

int main()
{
    Polynomial p {3,4,10};
    Polynomial p1 {1,2,3};
    p.to_string();
    p1.to_string();
    p += p1;
    p.to_string();

    Polynomial p2 {3,4,10};
    Polynomial p3 {1,2,3};
    p2.to_string();
    p3.to_string();
    p2 *= p3;
    p2.to_string();

    Polynomial p4 {3,4,10};
    Polynomial p5 {1,2,3};
    p4.to_string();
    p5.to_string();
    p4 -= p5;
    p4.to_string();

    Polynomial p6 {1,2,3,4};
    Polynomial p7 {2,3,4,5};
    // addition
    p6.to_string();
    p6 = p6 + p7;
    p6.to_string();
    // soustraction
    p6 = -p6;
    p6.to_string();
    // soustraction 2
    p6 = p6 - p7;
    p6.to_string();
    // multiplication
    p6 = p6 * p7;
    p6.to_string();
    // multiplication 2
    p6 = p6 * 200;
    p6.to_string();
    // multiplication 3
    p6 = 200 * p6;
    p6.to_string();
}
