#include <iostream>
#include <string>
#include "grabride.h"  // rename header for GrabRide
using namespace std;

void grabRide(Wallet &myWallet) {
    int locationChoice;
    double price = 0.0;
    string rideName;
    char rideAgain, confirm;

    do {
        cout << "=====================================\n";
        cout << "          Welcome to GrabRide        \n";
        cout << "=====================================\n";
        cout << "Choose your destination:\n";
        cout << "1. Dpulze- RM 10\n";
        cout << "2. IOI City Mall - RM 30\n";
        cout << "3. Tamarind Square - RM 15\n";
        cout << "4. MRT Cyber Utara - RM 25\n";
        cout << "0. Exit GrabRide\n";
        cout << "Choose your destination: ";
        cin >> locationChoice;

        if (locationChoice == 0) {
            break;
        }
        cout << "\n";

        switch (locationChoice) {
            case 1:
                rideName = "ride to Dpulze";
                price = 10;
                break;
            case 2:
                rideName = "ride to IOI City Mall";
                price = 30;
                break;
            case 3:
                rideName = "ride to Tamarind Square";
                price = 15;
                break;
            case 4:
                rideName = "ride to MRT Cyber Utara";
                price = 25;
                break;

            default:
                cout << "Invalid destination choice.\n";
                continue;
        }

        // Confirmation step
        cout << "Confirm ride: " << rideName << " (RM" << price << ") ? (y/n): ";
        cin >> confirm;

        if (confirm == 'y' || confirm == 'Y') {
            // Deduct from wallet
            myWallet.deductMoney(price, "GrabRide - " + rideName);
        } else {
            cout << "❌ Ride cancelled.\n";
        }

        cout << "\nWould you like to book another ride ? (y/n): ";
        cin >> rideAgain;

    } while (rideAgain == 'y' || rideAgain == 'Y');
}
