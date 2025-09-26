#include <iostream>
#include "grabfood.h"
#include "grabride.h"
#include "wallet.h"
using namespace std;

int main() {
    Wallet myWallet;
    int mainChoice, walletChoice;
    double amount;

    while (true) {
        cout << "\n=====================================\n";
        cout << "         Welcome to Grab         \n";
        cout << "=====================================\n";
        cout << " 1. Grab Ride \n";
        cout << " 2. Grab Food \n";
        cout << " 3. Grab Wallet \n";
        cout << " 0. Exit\n";
        cout << "-------------------------------------\n";
        cout << "Enter your choice: ";
        cin >> mainChoice;

        if (mainChoice == 1) {
            grabRide(myWallet);
        } else if (mainChoice == 2) {
            grabFood(myWallet);
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
                    break;
                } else {
                    cout << "Invalid choice!\n";
                }
            }
        } else if (mainChoice == 0) {
            cout << "Exiting Grab App...\n";
            break;
        } else {
            cout << "Invalid choice!\n";
        }
    }

    return 0;
}
