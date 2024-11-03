#include <string>
#include <vector>
#include <iostream>
using namespace std;

class Pile
{
private:
    vector<int> elements;
public:
    void push(int value);
    int pop();
    bool estVide();
    Pile ();
    ~Pile();
};

void Pile:: push(int value){
    elements.push_back(value);
};
int Pile:: pop(){
    if (estVide){
        cout << "La pile est vide!" << endl;
        return -1;
    }
    int value = elements.back();
    elements.pop_back();
};
bool Pile:: estVide(){
    return elements.empty();
};

int main(){
    Pile pile;
    pile.push(10);
    pile.push(20);
    pile.push(30);
    
    cout << "Pop: " << pile.pop() << endl;
    cout << "Pop: " << pile.pop() << endl;
    cout << "Pop: " << pile.pop() << endl;
    
    return 0;
    
};
