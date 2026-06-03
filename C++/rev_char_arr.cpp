#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[] = "hello";
    int start = 0, end = strlen(str) - 1;

    cout << end << endl;

    while(start < end){

        swap(str[start] , str[end]);
        start++;
        end--;
    }

    cout << str << endl;
    return 0;
}