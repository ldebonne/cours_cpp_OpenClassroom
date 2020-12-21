#ifndef __GUERRIER_H__
#define __GUERRIER_H__

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>

#include "personnage.h" // Pour pouvoir effectuer l'héritage

class Guerrier : public Personnage{ // Définition de l'héritage
    void coupDEpee(Personnage &cible) const;
};

#endif