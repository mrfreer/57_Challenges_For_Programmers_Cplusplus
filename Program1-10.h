#include <iostream>
using namespace std;

void program1(){
    cout << "What is your name?" << endl;
    string name;
    cin >> name;
    cout << "Hello, " << name << ", nice to meet you!" << endl;
}

void program2(){
    cout << "What is the input string?" << endl;
    string userInput;
    cin >> userInput;
    cout << userInput << " has " << userInput.length() << " characters." << endl;
}

void program3(){
    cin.ignore();
    string quote, author;
    cout << "What is the quote?" << endl;
    getline(cin, quote);
    cout << "Who say it?" << endl;
    getline(cin, author);
    cout << author << " says, \"" << quote << "\"" << endl;
}

void program4(){
    string noun, verb, adjective, adverb;
    cout << "Enter a noun" << endl;
    cin >> noun;
    cout << "Enter a verb" << endl;
    cin >> verb;
    cout << "Enter an adjective" << endl;
    cin >> adjective;
    cout << "Enter an adverb" << endl;
    cin >> adverb;
    cout << "Do you " << verb << " your " << adjective <<
                " "  << noun << " " << adverb << "?  That's hilarious!" << endl;
}

void program5(){
    int num1, num2;
    cout << "What is the first number?" << endl;
    cin >> num1;
    cout << "What is the second number?" << endl;
    cin >> num2;
    int add = num1 + num2;
    int subtract = num1 - num2;
    int multiply = num1 * num2;
    int divide = num1 / num2;
    cout << num1 << " + " << num2 << " = " << add << endl;
    cout << num1 << " - " << num2 << " = " << subtract << endl;
    cout << num1 << " * " << num2 << " = " << multiply << endl;
    cout << num1 << " / " << num2 << " = " << divide << endl;
}