#include "arme.h"

using namespace std;

Arme::Arme() : m_nom("Epee Rouillee"), m_degats(10){}
Arme::Arme(string nom, int degats) : m_nom(nom), m_degats(degats){}

void Arme::changer(string nouvelleArme, int degatsNouvelleArme){

    m_nom = nouvelleArme;
    m_degats = degatsNouvelleArme;

}

void Arme::afficher() const{
    cout << "Arme : " << m_nom << endl;
    cout << "Degats : " << m_degats << endl;
}

int Arme::getDegats() const{
    return m_degats;
}

string Arme::getNom() const{
    return m_nom;
}