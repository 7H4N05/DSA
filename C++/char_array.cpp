#include <iostream>
using namespace std;
int main() {
    char name[10];

    cout << "enter the string:" ;

    cin.getline(name,10,'.');

    cout << name << endl;
    
    return 0;
}