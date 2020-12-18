#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>

#include "melange.h"

using namespace std;

int main(int argc, char* argv[]){

    string mot;

    if(argc != 2){
        cout << "Le nombre d'arguments est incorrect (différent de 2)" << endl;
        return 1;
    }

    mot = argv[1];

    string nmot = melange(mot);
    for (int k = 0; k < 100; k++){
        cout << endl;
    }

    cout << "Retrouve le mot de départ à partir de ce mot : " << nmot << endl;
    
    return 0;
}