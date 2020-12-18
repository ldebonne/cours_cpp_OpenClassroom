#ifndef __FRACTION_H__
#define __FRACTION_H__

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
 
class Fraction{

    public:

    // Constructeurs :

    Fraction();
    Fraction(int n);
    Fraction(int n, int d);
    Fraction(Fraction const &autre);

    // Méthodes

    void simplifie();

    Fraction& operator*=(Fraction const &a);
    Fraction& operator+=(Fraction const &a);
    
    bool estEgal(Fraction const &a);
    bool estSup(Fraction const &a);
    bool estInf(Fraction const &a);

    void afficher(std::ostream &flux) const;

    // Opérateurs

    private:

    // Attributs

    int m_n;
    int m_d;
};

int pgcd(int a, int b);

Fraction operator*(Fraction const &a, Fraction const &b);
Fraction operator+(Fraction const &a, Fraction const &b);

bool operator==(Fraction const &a, Fraction const &b);
bool operator>(Fraction const &a, Fraction const &b);
bool operator<(Fraction const &a, Fraction const &b);

std::ostream &operator<<(std::ostream &flux, Fraction const& frac);

#endif