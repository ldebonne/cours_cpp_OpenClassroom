#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>

#include "personnage.h"
#include "arme.h"
#include "duree.h"

using namespace std;

int main(int argc, char* argv[]){

/* Personnages 
    //Création des personnages
    Personnage david, goliath("Épée aiguisée", 20);
 
    //Au combat !
    goliath.attaquer(david);
    david.boirePotionVie(20);
    goliath.attaquer(david);
    david.attaquer(goliath);
    goliath.changerArme("Double hache tranchante vénéneuse de la mort", 40);
    goliath.attaquer(david);
 
    //Temps mort ! Voyons voir la vie de chacun…
    cout << "David" << endl;
    david.afficherEtat();
    cout << endl << "Goliath" << endl;
    goliath.afficherEtat();
Fin Personnages */

    //Test des fonctions de temps (surchage opérateurs)

    Duree duree1(0, 10, 28), duree2(0, 10, 28);

    if (duree1 == duree2)
        cout << "Les durees sont identiques" << endl;
    else
        cout << "Les durees sont differentes" << endl;
 
    return 0;
}