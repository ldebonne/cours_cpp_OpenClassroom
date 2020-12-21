#ifndef __DUREE_H__
#define __DUREE_H__

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
 
class Duree{

    public:
 
    Duree();
    Duree(int heures, int minutes, int secondes);

    bool estEgal(Duree const& b) const;
 
    private:
 
    int m_heures;
    int m_minutes;
    int m_secondes;
};

bool operator==(Duree const& a, Duree const& b);
 
#endif