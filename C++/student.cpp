#include <iostream>

class IICS
{
public:
    int rollNo;
    char name[20];
    char course[20];
    int semester;
    int marks[5];
    void getDetails();
    void displayDetails();
    void calculateMarks();
};

int main() {
    std::cout << "Hello, World!";
    return 0;
}