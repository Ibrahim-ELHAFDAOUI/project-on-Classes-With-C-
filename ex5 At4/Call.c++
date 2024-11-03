#include<iostream>
using namespace std;
class T
{
private:
    static int counter;
public:
    void Call();
};
int T :: counter = 0;
void T::Call(){
    counter++;
    cout << "La fonction call a été appeler: " << counter << "fois" << endl;
};

int main() {
    T t;
    T b;
    T c;
    t.Call();
    b.Call();
    c.Call();

    return 0;
}