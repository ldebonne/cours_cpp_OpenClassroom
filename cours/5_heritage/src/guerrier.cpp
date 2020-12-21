#include "guerrier.h"

using namespace std;

void Guerrier::coupDEpee(Personnage &cible) const{
    cible.recevoirDegats(15);
}