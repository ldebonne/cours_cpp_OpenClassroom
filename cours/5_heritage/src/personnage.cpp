#include "personnage.h"

using namespace std;

Personnage::Personnage() : m_vie(100), m_nom("Jack"){}

void Personnage::recevoirDegats(int degats){
    m_vie -= degats;
    if(m_vie < 0){
        m_vie = 0;
    }
}

void Personnage::coupDePoing(Personnage &cible) const{
    cible.recevoirDegats(10);
}