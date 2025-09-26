#include "wallet.h"

Wallet::Wallet() {
    balance = 0.0;
    history.push_back("Wallet created with balance RM0.00");
}

void Wallet::viewBalance() {
    cout << "\n💰 Current Balance: RM"
         << fixed << setprecision(2) << balance << endl;
}

void Wallet::addMoney(double amount) {
    if (amount > 0) {
        balance += amount;
        history.push_back("Added RM" + formatAmount(amount));
        cout << "Successfully added RM"
             << fixed << setprecision(2) << amount << " to wallet.\n";
    } else {
        cout << "Invalid amount.\n";
    }
}

void Wallet::deductMoney(double amount, const string &purpose) {
    if (amount <= balance) {
        balance -= amount;
        history.push_back("Deducted RM" + formatAmount(amount) + " for " + purpose);
        cout << "Deducted RM"
             << fixed << setprecision(2) << amount << " for " << purpose << ".\n";
    } else {
        cout << "Insufficient balance!\n";
    }
}

void Wallet::viewHistory() {
    cout << "\nTransaction History:\n";
    for (const auto &h : history) {
        cout << "- " << h << endl;
    }
}

string Wallet::formatAmount(double amount) {
    ostringstream out;
    out << fixed << setprecision(2) << amount;
    return out.str();
}
