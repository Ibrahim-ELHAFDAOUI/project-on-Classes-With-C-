#include <iostream>
#include <string>

using namespace std;

class Personne {
protected:
    string nom;
    string prenom;
    string date_naissance;

public:
    Personne(string n, string p, string d) : nom(n), prenom(p), date_naissance(d) {}

    virtual void Afficher() {
        cout << "Nom: " << nom << ", Prenom: " << prenom << ", Date de Naissance: " << date_naissance << endl;
    }
};

class Employe : public Personne {
protected:
    double salaire;

public:
    Employe(string n, string p, string d, double s) : Personne(n, p, d), salaire(s) {}

    void Afficher() {
        Personne::Afficher();
        cout << "Salaire: " << salaire << endl;
    }
};

class Chef : public Employe {
protected:
    string service;

public:
    Chef(string n, string p, string d, double s, string serv) : Employe(n, p, d, s), service(serv) {}

    void Afficher(){
        Employe::Afficher();
        cout << "Service: " << service << endl;
    }
};

class Directeur : public Chef {
protected:
    string societe;

public:
    Directeur(string n, string p, string d, double s, string serv, string soc) 
        : Chef(n, p, d, s, serv), societe(soc) {}

    void Afficher(){
        Chef::Afficher();
        cout << "Société: " << societe << endl;
    }
};

int main() {
    Directeur directeur("Mohamed", "Youssef", "15/04/1993", 120000, "Ressources Humaines", "TechCorp");

    directeur.Afficher();

    return 0;
 }

    