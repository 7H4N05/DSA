#include <iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isPalindrome(string str) {
    string rev = str;
    reverse(str.begin(),str.end());
    return rev == str;
}
int main() {
    string str;
    cout << "Enter the string:" ;
    getline(cin , str);
    cout << isPalindrome(str) << endl;
    return 0;
}