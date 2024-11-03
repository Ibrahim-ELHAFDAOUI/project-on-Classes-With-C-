#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class Vecteur
{
private:
    float x, y, z;
public:
     Vecteur(); 
     Vecteur(int x, int y, int z);
     void afficher();
     Vecteur somme(Vecteur v2);
     Vecteur produit(Vecteur v2);
     void coincide(Vecteur v1, Vecteur v2);
     float norme(Vecteur v1);
     Vecteur normax(Vecteur v1, Vecteur v2);


};
Vecteur:: Vecteur(){
     x=0;
     y=0;
     z=0    
};

Vecteur::Vecteur(int x, int y, int z) : x(x), y(y), z(z) {};
void Vecteur:: afficher(){
         cout << "(" << x << ", " << y << ", " << z << ")" << endl;
};

Vecteur Vecteur::somme(Vecteur v2){
     Vecteur res;
     res.x = x + v2.x;
     res.y = y + v2.y;
     res.z = z + v2.z;
     return res;
};

Vecteur Vecteur::produit(Vecteur v2){
    Vecteur resultas;
    resultas.x= x*v2.x;
    resultas.y= y*v2.y;
    resultas.z= z*v2.z;
    return resultas;
};

void Vecteur:: coincide(Vecteur v1, Vecteur v2){
    if(v1.x == v2.x && v1.y == v2.y && v1.z == v2.z){
        cout << "Les vecteurs sont identiques" << endl;
    }else{
        cout << "Les vecteurs ne sont pas identiques" << endl;
    };
};

float Vecteur:: norme(Vecteur v1){
    float distance = sqrt(pow(v1.x , 2) + pow(v1.y , 2) + pow(v1.z, 2));
    return distance;
};


Vecteur Vecteur:: normax(Vecteur v1, Vecteur v2){
      if(norme(v1)>norme(v2))
      return v1;
      else if (norme(v1)<norme(v2))
      return v2;
}