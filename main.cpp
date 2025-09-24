#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <sstream>
#include "grabfood.h"
using namespace std;

// ===== WALLET CLASS =====
class Wallet {
private:
    double balance;
    vector<string> history;

public:
    Wallet() {
        balance = 0.0;
        history.push_back("Wallet created with balance RM0.00");
    }

    void viewBalance() {
        cout << "\n💰 Current Balance: RM"
             << fixed << setprecision(2) << balance << endl;
    }

    void addMoney(double amount) {
        if (amount > 0) {
            balance += amount;
            history.push_back("Added RM" + formatAmount(amount));
            cout << "✅ Successfully added RM"
                 << fixed << setprecision(2) << amount << " to wallet.\n";
        } else {
            cout << "❌ Invalid amount.\n";
        }
    }

    void deductMoney(double amount, const string &purpose) {
        if (amount <= balance) {
            balance -= amount;
            history.push_back("Deducted RM" + formatAmount(amount) + " for " + purpose);
            cout << "✅ Deducted RM"
                 << fixed << setprecision(2) << amount << " for " << purpose << ".\n";
        } else {
            cout << "❌ Insufficient balance!\n";
        }
    }

    void viewHistory() {
        cout << "\n📜 Transaction History:\n";
        for (const auto &h : history) {
            cout << "- " << h << endl;
        }
    }

    // Helper to format amount
    string formatAmount(double amount) {
        ostringstream out;
        out << fixed << setprecision(2) << amount;
        return out.str();
    }
};

// ===== MAIN PROGRAM =====
int main() {
    Wallet myWallet;
    int mainChoice, walletChoice;
    double amount;

    while (true) {
        cout << "\n=====================================\n";
        cout << "         🚖 Welcome to Grab 🚖        \n";
        cout << "=====================================\n";
        cout << " 1. Grab Ride 🚗  (coming soon)\n";
        cout << " 2. Grab Food 🍔  (demo)\n";
        cout << " 3. Grab Wallet 💰\n";
        cout << " 0. Exit\n";
        cout << "-------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        if (mainChoice == 1) {
            cout << "🚗 Grab Ride is under development.\n";
        } else if (mainChoice == 2) {
            grabFood(); // friend's function
        } else if (mainChoice == 3) {
            while (true) {
                cout << "\n=== Grab Wallet Menu ===\n";
                cout << "1. View Balance\n";
                cout << "2. Add Money\n";
                cout << "3. View History\n";
                cout << "0. Back to Homepage\n";
                cout << "Choose option: ";
                cin >> walletChoice;

                if (walletChoice == 1) {
                    myWallet.viewBalance();
                } else if (walletChoice == 2) {
                    cout << "Enter amount to add: RM";
                    cin >> amount;
                    myWallet.addMoney(amount);
                } else if (walletChoice == 3) {
                    myWallet.viewHistory();
                } else if (walletChoice == 0) {
                    break; // back to homepage
                } else {
                    cout << "❌ Invalid choice!\n";
                }
            }
        } else if (mainChoice == 0) {
            cout << "👋 Exiting Grab App...\n";
            break;
        } else {
            cout << "❌ Invalid choice!\n";
        }
    }

    return 0;
}
