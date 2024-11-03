#include <string>
#include<iostream>
#include "point.h"
#include "point.cpp"
using namespace std;

int main(){
    point p(1.5 , 1);
    p.affiche();

    p.deplace(2 , 1.33);
    p.affiche();
    return 0;
};