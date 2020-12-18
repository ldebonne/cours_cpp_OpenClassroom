#ifndef __ARME_H__
#define __ARME_H__

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

class Arme{

    public:

    // Constructeurs
 
    Arme();
    Arme(std::string nom, int degats);

    // Méthodes

    void changer(std::string nom, int degats);
    void afficher() const;
    int getDegats() const;
    std::string getNom() const;
 
    private:

    //Attributs
 
    std::string m_nom;
    int m_degats;
};

#endif