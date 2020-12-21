#ifndef __PERSONNAGE_H__
#define __PERSONNAGE_H__

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

class Personnage{

    public:

        Personnage();
        void recevoirDegats(int degats);
        void coupDePoing(Personnage &cible) const;

    private:

        int m_vie;
        std::string m_nom;
        
};

#endif