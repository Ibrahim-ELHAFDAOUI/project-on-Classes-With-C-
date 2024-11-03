#include<iostream>

using namespace std;
struct Element
{
    int valeur;
    Element* suivant;
};

class list{
    private:
    Element* tete;
    public:
    list();
    void ajouterAudebut(int valeur);
    int supprimerAudebut();
    void afficherListe();
};

list::list(){
    tete = NULL;
};

void list::ajouterAudebut(int valeur){
    Element* nouveau = new Element;
    nouveau->valeur = valeur;
    nouveau->suivant = tete;
    tete = nouveau;
};

int list::supprimerAudebut(){
    if(tete!= NULL){
        int valeur = tete->valeur;
        Element* temp = tete;
        tete = tete->suivant;
        delete temp;
        return valeur;
    }
    else{
        cout << "La liste est vide." << endl;
        return -1;
    }
};

void list::afficherListe(){
    Element* courant = tete;
    while(courant!= NULL){
        cout << courant->valeur << " ";
        courant = courant->suivant;
    }
    cout << endl;
};
