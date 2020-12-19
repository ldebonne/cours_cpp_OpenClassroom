#ifndef __PERSONNAGE_H__
#define __PERSONNAGE_H__

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

#include "arme.h"

class Personnage{

    public:

    Personnage(); // Constructeur par défaut
    Personnage(Personnage const &PersonnageACopier);
    Personnage(std::string nomArme, int degatsArme);
    ~Personnage(); // Destructeur
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    bool estVivant() const; //La méthode ne modifie aucun attribut
    void afficherEtat() const;
    Personnage &operator=(Personnage const &PersonnageACopier);

    private:

    int m_vie;
    int m_mana;
    Arme *m_arme; // Autre classe

};

#endif