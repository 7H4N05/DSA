#include <iostream>
using namespace std;
int main() {
    string name = "Tanush";
    cout << name << endl ; 
    string name2 = "hello";
    cout << name + name2 << endl ; 

    cout << (name == name2) << endl;

    cout << (name < name2) << endl;

    cout << name.length() << endl;

    cout << name2.length() << endl;

    getline(cin,name);

    cout << name << endl;

    for(char ch : name){
        cout << ch << " " ;
    }
    return 0;
}