//
// Created by David on 3/5/2017.
//

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