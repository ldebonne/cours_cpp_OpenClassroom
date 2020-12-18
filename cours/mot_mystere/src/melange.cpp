#include "melange.h"

using namespace std;

string melange(string mot){

    int len = mot.length(); // récupère la taille du mot
    cout << len << endl;
    srand((unsigned int)time(0)); //genere aléatoire

    for(int i = 0; i < 100; i++){
        // Récupère deux valeurs aléatoires entre 1 et len
        int valeur1 = rand()%len;
        int valeur2 = rand()%len;

        char tmp = mot[valeur1];
        mot[valeur1] = mot[valeur2];
        mot[valeur2] = tmp;
    }

    return mot;
}