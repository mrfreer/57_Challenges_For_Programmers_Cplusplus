#include <iostream>
#include "Program1-10.h"

using namespace std;
int main() {
    while(true){
    cout << "Which program do you wish to run?" << endl;
    int program;
    cin >> program;
    switch (program)
    {
        case 1:
            program1();
            break;
        case 2:
            program2();
            break;
        case 3:
            program3();
            break;
        case 4:
            program4();
            break;
        default:
            cout << "Invalid choice.";
    }
    }
}