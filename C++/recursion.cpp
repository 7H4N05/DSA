#include <iostream>
using namespace std;

void printNum(int n){
    cout << n << " ";
    if(n == 0){
        return;
    }
    printNum(n-1);

}

int main() {
    int n = 10;
    printNum(n);
    return 0;
}