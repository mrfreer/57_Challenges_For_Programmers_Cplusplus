//
// Created by David on 3/5/2017.
//
#include <iomanip>
#include <cmath>

#ifndef INC_57_CHALLENGES_FOR_PROGRAMMERS_C_PROGRAM11_20_H
#define INC_57_CHALLENGES_FOR_PROGRAMMERS_C_PROGRAM11_20_H

#endif //INC_57_CHALLENGES_FOR_PROGRAMMERS_C_PROGRAM11_20_H

void program11(){
    int euros;
    double exchangeRate;
    cout << "How many euros are you exchanging?" << endl;
    cin >> euros;
    cout << "What is the exchange rate?" << endl;
    cin >> exchangeRate;
    double dollars = euros * exchangeRate;
    cout << euros << " euros at an exchange rate of " << exchangeRate <<
      " is " << dollars << " U.S. dollars." << endl;
}

void program12(){
    double principal, i_rate, numYears, accrued;
    cout << "Enter the principal:";
    cin >> principal;
    cout << "Enter the rate of interest:";
    cin >> i_rate;
    cout << "Enter the number of years:";
    cin >> numYears;
    //P(1+rt)
    accrued = principal * (1 + i_rate/100.0 * numYears);
    cout << "After " << numYears << " years at " << i_rate << " %," <<
        " the investment will be worth $";
    cout << fixed << setprecision(2) << accrued << endl;
}

void program13(){
    //A=P(1 + r/n)^(nt)
    double principal, i_rate, numYears, accrued, numTimesCompounded;
    cout << "Enter the principal:";
    cin >> principal;
    cout << "Enter the rate of interest:";
    cin >> i_rate;
    cout << "Enter the number of years:";
    cin >> numYears;
    cout << "Enter the number of times the interest is compounded per year:" << endl;
    cin >> numTimesCompounded;
    accrued = principal * pow((1 + (i_rate/100.0)/numTimesCompounded), (numTimesCompounded * numYears));
    cout << "$" << fixed << setprecision(2) << principal << " invested at " <<
    i_rate << "% for " << numYears << " compounded " << numTimesCompounded << " times " <<
    " per year is $" << accrued << endl;

}

void program14(){
    //WI is charged 5.5%
    string state;
    double orderAmt, tax = 0, total = 0;
    cout << "What is the order amount?" << endl;
    cin >> orderAmt;
    cout << "What is the state?" << endl;
    cin >> state;
    if(state == "WI") {
        cout << "The subtotal is $" << fixed << setprecision(2) << orderAmt << "." << endl;
        tax = orderAmt * .055;
        cout << "The tax is " << fixed << setprecision(2) << "$" << tax << endl;
        cout << "The total is " << fixed << setprecision(2) << "$" << (tax + orderAmt) << "." << endl;
    } else{
        cout << "The total is $" << fixed << setprecision(2) << orderAmt << "." << endl;
    }
}