#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
    string name = "nayan";

    reverse(name.begin(),name.end());

    cout << name << endl;

    return 0;
}