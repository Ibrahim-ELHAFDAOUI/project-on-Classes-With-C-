#include "point.h"
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

point::point(float x, float y) : X(x), Y(y)
{

};
void point::deplace(float dx, float dy){
    X += dx;
    Y += dy;
};
void point::affiche(){
    cout << "x : " << X << ", y : " << Y << endl;
};


point::~point()
{

};