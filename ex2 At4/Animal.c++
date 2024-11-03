#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    string nom;
    int age;

public:
    void set_value(string n, int a) {
        nom = n;
        age = a;
    }
};

class Zebra : public Animal {
public:
    void display() {
        cout << "Nom: " << nom << ", Age: " << age << " ans" << endl;
    }
};

class Dolphin : public Animal {
public:
    void display() {
        cout << "Nom: " << nom << ", Age: " << age << " ans" << endl;
    }
};

int main() {
    Zebra zebra;
    Dolphin dolphin;

    zebra.set_value("Zelda", 5);
    dolphin.set_value("Dolly", 8);

    zebra.display();
    cout << endl;

    dolphin.display();

    return 0;
}