#include <iostream>
using namespace std;

string isPrime(int num){
    for(int i = 2 ; i*i <= num ; i++){
        if(num % i == 0){
            return "Not Prime";
        }
    }
    return "Is Prime";
}

int main() {
    int num;
    cout << "Enter the num : ";
    cin >> num ;
    cout << isPrime(num) ;
    return 0;
}