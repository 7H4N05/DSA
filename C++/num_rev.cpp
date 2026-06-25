#include <iostream>
using namespace std;

int rev_num(int num){
    int rev = 0;
    while(num > 0){ //1234
       rev += num % 10 ; //4  
       num = num / 10 ; //123
       rev *= 10; //40

    }
    return rev / 10;
}
int main() {
    int num;
    cout << "Enter the num:" ;
    cin >> num ;
    cout << "the rev :" << rev_num(num);
    return 0;
}