#include "personnage.h"

using namespace std;

Personnage::Personnage() : m_vie(100), m_mana(100){} //Constructeur par défaut

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100),m_arme(nomArme, degatsArme){}

void Personnage::recevoirDegats(int nbDegats){
    m_vie -= nbDegats;
    if(m_vie < 0){
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible){

    cible.recevoirDegats(m_arme.getDegats());

}

void Personnage::boirePotionVie(int quantitePotion){

    m_vie += quantitePotion;
    if(m_vie > 100){
        m_vie = 100;
    }   

}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme){
    m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const { //La méthode ne modifie aucun attribut

    return m_vie > 0;
}

void Personnage::afficherEtat() const{

    cout << "vie :: " << m_vie << endl;
    cout << "mana :: " << m_mana << endl;
    cout << "arme :: " << m_arme.getNom() << endl;
    cout << "degats :: " << m_arme.getDegats() << endl;
}

