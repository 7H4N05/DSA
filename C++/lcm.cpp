#include "gcd.cpp"
#include <iostream>
using namespace std;
int gcd(int a,int b);
int main() {
    int a , b;
    int lcm;
    cout << "Enter a :";
    cin >> a;
    cout << "Enter b :";
    cin >> b;
    cout << "lcm:" << (a*b)/(gcd(a,b));
    return 0;
}