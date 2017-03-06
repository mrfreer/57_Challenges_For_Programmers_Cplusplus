#include <iostream>
#include "Program1-10.h"
#include "Program11-20.h"

using namespace std;
int main() {
    while(true){
    cout << "Which program do you wish to run? 0 to quit." << endl;
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
        case 5:
            program5();
            break;
        case 6:
            program6();
            break;
        case 7:
            program7();
            break;
        case 8:
            program8();
            break;
        case 9:
            program9();
            break;
        case 10:
            program10();
            break;
        case 11:
            program11();
            break;
        case 0:
            return 0;
        default:
            cout << "Invalid choice.";
    }
    }
}