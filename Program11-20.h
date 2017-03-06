//
// Created by David on 3/5/2017.
//
#include <iomanip>

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