#include <iostream>
#include <ctime>
#include <chrono>
#include <cmath>
#include <iomanip>
#include <locale>
#include <sstream>

using namespace std;

typedef chrono::system_clock Clock;

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

void program6(){
    int curAge, retireAge;
    cout << "What is your current age?" << endl;
    cin >> curAge;
    cout << "At what age would you like to retire?" << endl;
    cin >> retireAge;
    auto now = Clock::now();
    time_t now_c = Clock::to_time_t(now);
    struct tm * parts = localtime(&now_c);
    int year = 1900 + parts->tm_year;
    cout << "It's " << year << " so you can retire in " << (year +
            (retireAge- curAge)) << "." << endl;
}

void program7(){
    int lenFt, widFt, areaFT;
    double areaMeters;
    cout << "What is the length of the room in feet?" << endl;
    cin >> lenFt;
    cout << "What is the width of the room in feet?" << endl;
    cin >> widFt;
    cout << "You entered dimensions of " <<
                                         lenFt << " feet by " <<
                                         widFt << " feet.\n";
    areaFT = lenFt * widFt;
    areaMeters = areaFT * 0.092903;
    cout << "The area is " << endl;
    cout << areaFT << " square feet." << endl;
    cout << areaMeters << " square meters." << endl;
}

void program8(){
    int numPeople, numSlices, numPizzas;
    cout << "How many people?" << endl;
    cin >> numPeople;
    cout << "How many slices of pizza per pizza?" << endl;
    cin >> numSlices;
    cout << "How many pizzas?" << endl;
    cin >> numPizzas;
    int totalSlices = (numSlices * numPizzas);
    int slicesPerPerson = (int)(totalSlices / (double)numPeople);
    cout << "Each person gets " << slicesPerPerson <<
       " slices of pizza." << endl;
    cout << "There are " << (totalSlices - (slicesPerPerson * numPeople))
                 << " leftover pieces." << endl;

}

void program9(){
    int length, width;
    cout << "Enter the length and width of a room in feet:" << endl;
    cin >> length >> width;
    int area = length * width;
    int gallons = ceil(area / (double)350);
    if(gallons == 1)
        cout << "You will need to purchase " << gallons << " gallon of paint"
            << " to cover " << area << " square feet." << endl;
    else
        cout << "You will need to purchase " << gallons << " gallons of paint"
             << " to cover " << area << " square feet." << endl;
}

void program10(){
    int qty1, qty2, qty3;
    double price1, price2, price3, subtotal = 0.0, tax = 0.0, total = 0.0;
    cout << "Enter the price of item 1" << endl;
    cin >> price1;
    cout << "Enter the quantity of item 1" << endl;
    cin >> qty1;
    cout << "Enter the price of item 2" << endl;
    cin >> price2;
    cout << "Enter the quantity of item 2" << endl;
    cin >> qty2;
    cout << "Enter the price of item 3" << endl;
    cin >> price3;
    cout << "Enter the quantity of item 3" << endl;
    cin >> qty3;
    subtotal = (price1 * qty1) + (price2 * qty2) + (price3 * qty3);
    stringstream ss, st;

    cout << fixed << setprecision(2);

    cout << "Subtotal $" << subtotal << endl;
    tax = subtotal * .055;
    total = tax + subtotal;
    st << total;
    st.precision(2);
    st << fixed;
    cout << "Total $" << st.str() << endl;
}