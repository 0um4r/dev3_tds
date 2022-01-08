#include "polynomial.h"

Polynomial::Polynomial(const std::initializer_list<int> & list) : _coefficients {}
{
    if(list.size() != 0) {
        for(int values : list) {
            _coefficients.push_back(values);
        }
    }

    compute_degree();
}

unsigned Polynomial::degree() const
{
    return _degree;
}

int Polynomial::operator [](unsigned d) const
{
    if(d > _degree) {
        return 0;
    } else {
        return _coefficients.at((_coefficients.size() - d) - 1);
    }
}

void Polynomial::set(unsigned deg, int a)
{
    if(deg <= _degree) {
        _coefficients.at(_degree - deg) = a;
    } else {
        std::vector<int> old = _coefficients;
        _coefficients.clear();
        _coefficients.resize(deg);
        int old_index = old.size() - 1;
        for(unsigned index = _coefficients.size() - 1; index >= 1; index--) {
            if(old_index < 0) {
                break;
            } else {
                _coefficients.at(index) = old.at(old_index);
            }
            old_index--;
        }
        compute_degree();
        _coefficients.at(0) = a;
    }
}

double Polynomial::operator()(double x)
{
    if(x >= 0) {
        return _coefficients.at(x);
    }
    return 0;
}

Polynomial Polynomial::derivate() const
{
    unsigned degree = _degree;
    Polynomial other (degree);
    std::vector<int> copy (degree + 1,0);
    other._coefficients = copy;
    for(unsigned i = 0; i < _coefficients.size(); i++) {
        other._coefficients.at(i) = _coefficients.at(i) * degree;
        degree--;
    }
    return other;
}

Polynomial & Polynomial::operator +=(const Polynomial & p)
{
    unsigned index= 0;
    while(index < _coefficients.size() && index < p._coefficients.size()) {
        _coefficients.at(index) += p._coefficients.at(index);
        index++;
    }
    return *this;
}

Polynomial & Polynomial::operator -=(const Polynomial & p)
{
    unsigned index= 0;
    while(index < _coefficients.size() && index < p._coefficients.size()) {
        _coefficients.at(index) -= p._coefficients.at(index);
        index++;
    }
    return *this;
}

Polynomial & Polynomial::operator *=(const Polynomial & p)
{
    unsigned index= 0;
    while(index < _coefficients.size() && index < p._coefficients.size()) {
        _coefficients.at(index) *= p._coefficients.at(index);
        index++;
    }
    return *this;
}

Polynomial & Polynomial::operator +=(int d)
{
    unsigned index= 0;
    while(index < _coefficients.size()) {
        _coefficients.at(index) += d;
        index++;
    }
    return *this;
}

void Polynomial::to_string()
{
    std::cout << * this << std::endl;
}

