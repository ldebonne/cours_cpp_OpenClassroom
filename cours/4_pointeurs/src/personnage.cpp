#include "personnage.h"

using namespace std;

Personnage::Personnage() : m_vie(100), m_mana(100), m_arme(0){
    m_arme = new Arme;
} //Constructeur par défaut

Personnage::Personnage(Personnage const &PersonnageACopier) : m_vie(PersonnageACopier.m_vie), m_mana(PersonnageACopier.m_mana){
    m_arme = new Arme(*(PersonnageACopier.m_arme));
}

Personnage::Personnage(string nomArme, int degatsArme) : m_vie(100), m_mana(100), m_arme(0){
    m_arme = new Arme(nomArme, degatsArme);
}

Personnage::~Personnage(){ // Destructeur (ici utile afin de désallouer l'espace en mémoire prise par new Arme() (pointeurs ...))
    delete m_arme;
}

void Personnage::recevoirDegats(int nbDegats){
    m_vie -= nbDegats;
    if(m_vie < 0){
        m_vie = 0;
    }
}

void Personnage::attaquer(Personnage &cible){

    cible.recevoirDegats(m_arme->getDegats());

}

void Personnage::boirePotionVie(int quantitePotion){

    m_vie += quantitePotion;
    if(m_vie > 100){
        m_vie = 100;
    }   

}

void Personnage::changerArme(string nomNouvelleArme, int degatsNouvelleArme){
    m_arme->changer(nomNouvelleArme, degatsNouvelleArme);
}

bool Personnage::estVivant() const { //La méthode ne modifie aucun attribut

    return m_vie > 0;
}

void Personnage::afficherEtat() const{

    cout << "vie :: " << m_vie << endl;
    cout << "mana :: " << m_mana << endl;
    cout << "arme :: " << m_arme->getNom() << endl;
    cout << "degats :: " << m_arme->getDegats() << endl;
}

Personnage &Personnage::operator=(Personnage const &PersonnageACopier){ // L'opérateur = va de pair avec le constructeur de copie
    if(this != &PersonnageACopier){ // Vérifier que les deux objets sont différents
        m_vie = PersonnageACopier.m_vie; // Copier les attributs qui ne sont pas des classes
        m_mana = PersonnageACopier.m_mana;
        delete m_arme; // Supprimer les attributs qui sont des classes (de la mémoire surtout)
        m_arme = new Arme(*(PersonnageACopier.m_arme)); // Copier les attributs qui sont des classes (allocation mémoire)
    }
    return *this; // Retourner l'objet comme avec toutes les méthodes pour operator
}
