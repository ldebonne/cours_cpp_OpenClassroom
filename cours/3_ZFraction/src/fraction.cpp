#include "fraction.h"
 
using namespace std;

// Constructeurs

Fraction::Fraction() : m_n(0), m_d(1){}
Fraction::Fraction(int n) : m_n(n), m_d(1){}
Fraction::Fraction(int n, int d) : m_n(n), m_d(d){}
Fraction::Fraction(Fraction const &autre) : m_n(autre.m_n), m_d(autre.m_d){}

// pgcd & simplification

int pgcd(int a, int b){
    if(b == 0)
        return a;
    else{
        int r = a%b;
        return pgcd(b,r);
    }
}

void Fraction::simplifie(){
    int p = pgcd(m_n, m_d);
    m_n = m_n / p;
    m_d = m_d / p;
}


// Multiplication

Fraction& Fraction::operator*=(Fraction const &a){
    m_n *= a.m_n;
    m_d *= a.m_d;
    this->simplifie();
    return *this;
}

Fraction operator*(Fraction const &a, Fraction const &b){
    Fraction copie(a);
    return copie*=b;
}


// Addition

Fraction& Fraction::operator+=(Fraction const &a){
    if(a.m_d != m_d){
        m_n = m_n*a.m_d + a.m_n*m_d;
        m_d *= a.m_d;
    }else{
        m_n += a.m_n;
    }
    this->simplifie();
    return *this;
}

Fraction operator+(Fraction const &a, Fraction const &b){
    Fraction copie(a);
    return copie+=b;
}

// Comparaisons

bool Fraction::estEgal(Fraction const &a){
    Fraction ca(a);
    ca.simplifie();
    this->simplifie();
    return (ca.m_n == m_n && ca.m_d == m_d);
}

bool operator==(Fraction const &a, Fraction const &b){
    Fraction ca(a);
    return ca.estEgal(b);
}

bool Fraction::estSup(Fraction const &a){ // La fraction est supérieure à l'argument (a)
    Fraction ca(a);
    ca.simplifie();
    this->simplifie();
        if(ca.m_d != m_d){
            m_n = m_n * ca.m_d;
            ca.m_n = ca.m_n * m_d;
        }
        return m_n > ca.m_n;
    
}

bool operator>(Fraction const &a, Fraction const &b){
    Fraction ca(a);
    return ca.estSup(b);
}

bool Fraction::estInf(Fraction const &a){
    Fraction ca(a);
    ca.simplifie();
    this->simplifie();
        if(ca.m_d != m_d){
            m_n = m_n * ca.m_d;
            ca.m_n = ca.m_n * m_d;
        }
        return m_n < ca.m_n;
}

bool operator<(Fraction const &a, Fraction const &b){
    Fraction ca(a);
    return ca.estInf(b);
}

// Affichage

void Fraction::afficher(ostream &flux) const{
    flux << m_n << " / " << m_d;
}

ostream &operator<<( ostream &flux, Fraction const& frac){
    frac.afficher(flux) ;
    return flux;
}

