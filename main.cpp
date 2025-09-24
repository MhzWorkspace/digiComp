#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "=============================\n";
    cout << "   Welcome to Simple Grab\n";
    cout << "=============================\n";
    cout << "1. Grab Ride\n";
    cout << "2. Grab Food\n";
    cout << "3. Grab Wallet\n";
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Temporary message until friends add their functions
    switch(choice) {
        case 1: cout << "Grab Ride selected.\n"; break;
        case 2: cout << "Grab Food selected.\n"; break;
        case 3: cout << "Grab Wallet selected.\n"; break;
        default: cout << "Invalid choice.\n";
    }

    return 0;
}
