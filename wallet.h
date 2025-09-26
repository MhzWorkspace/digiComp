#ifndef WALLET_H
#define WALLET_H

#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
using namespace std;

class Wallet {
private:
    double balance;
    vector<string> history;

public:
    Wallet();

    void viewBalance();
    void addMoney(double amount);
    void deductMoney(double amount, const string &purpose);
    void viewHistory();

    string formatAmount(double amount);
};

#endif
