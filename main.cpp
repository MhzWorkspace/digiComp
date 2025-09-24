#include <iostream>
#include "grabfood.h"
using namespace std;

int main() {
    int choice;

    cout << "=====================================\n";
    cout << "         🚖 Welcome to Grab 🚖        \n";
    cout << "=====================================\n";
    cout << "   Please choose a service:           \n";
    cout << "-------------------------------------\n";
    cout << "  1. Grab Ride   🚗  (Book a ride)    \n";
    cout << "  2. Grab Food   🍔  (Order food)     \n";
    cout << "  3. Grab Wallet 💰  (Pay & Top-up)   \n";
    cout << "-------------------------------------\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    cout << "\n";

    switch(choice) {
        case 1: cout << "➡ You selected Grab Ride 🚗\n"; break;
        case 2:
            grabFood(); 
            break;
        case 3: cout << "➡ You selected Grab Wallet 💰\n"; break;
        default: cout << "❌ Invalid choice. Please try again.\n";
    }

    system("pause");
    return 0;
}
