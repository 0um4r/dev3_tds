#ifndef POLY_INT_H
#define POLY_INT_H

#include <vector>
#include <iostream>

class Polynomial
{
    std::vector<int> _coefficients;
    unsigned _degree;

public:
    explicit Polynomial(unsigned n) : _degree {n} {};

    Polynomial(const std::initializer_list<int> &);

    unsigned degree() const;

    friend std::ostream & operator << (std::ostream & os, const Polynomial & p)
    {
        if(p._coefficients.size() == 1) {
            os << "x^" << p._degree;
        } else if(p._coefficients.size() > 1) {
            unsigned count = p.degree();
            for(int values : p._coefficients) {
                if(count > 1) {
                    os << values << " x^" << count << " + ";
                } else if(count == 1) {
                    os << values << " x" << " + ";
                } else {
                    os << values;
                }
                count--;
            }
        }
        return os;
    }

    void to_string();

    int operator [](unsigned d) const;

    void set(unsigned deg, int a);

    double operator()(double x);

    Polynomial derivate() const;

    Polynomial & operator +=(const Polynomial & p);
    Polynomial & operator -=(const Polynomial & p);
    Polynomial & operator *=(const Polynomial & p);
    Polynomial & operator +=(int d);

    friend Polynomial operator +(const Polynomial & p1, const Polynomial & p2)
    {
        Polynomial copy(p1);
        copy += p2;
        return copy;
    }

    friend Polynomial operator -(const Polynomial & p)
    {
        Polynomial copy(p);
        for(unsigned i = 0; i < p._coefficients.size(); i++) {
            copy._coefficients.at(i) = 0 - copy._coefficients.at(i);
        }
        return copy;
    }

    friend Polynomial operator -(const Polynomial & p1, const Polynomial & p2)
    {
        Polynomial copy(p1);
        copy -= p2;
        return copy;
    }

    friend Polynomial operator *(const Polynomial & p1, const Polynomial & p2)
    {
        Polynomial copy(p1);
        copy *= p2;
        return copy;
    }

    friend Polynomial operator *(const Polynomial & p, const int & value)
    {
        Polynomial copy(p);
        for(unsigned i = 0; i < copy._coefficients.size(); i++) {
            copy._coefficients.at(i) *= value;
        }
        return copy;
    }

    friend Polynomial operator *(const int & value, const Polynomial& p)
    {
        Polynomial copy(p);
        for(unsigned i = 0; i < copy._coefficients.size(); i++) {
            copy._coefficients.at(i) *= value;
        }
        return copy;
    }

private:
    void compute_degree()
    {
        (_coefficients.size() != 0) ? (_degree = _coefficients.size() - 1) : (_degree = 0);
    }
};

#endif
