#include <iostream>
#include <string>
#include "grabfood.h"
using namespace std;

void grabFood() {
    int foodChoice, restaurantChoice;
    double totalBill = 0.0;
    char orderAgain;

    do {
        cout << "=====================================\n";
        cout << "          Welcome to GrabFood         \n";
        cout << "=====================================\n";
        cout << "Choose a food category:\n";
        cout << "1. Pizza\n";
        cout << "2. Burger\n";
        cout << "3. Rice\n";
        cout << "0. Exit GrabFood\n";
        cout << "Enter your choice: ";
        cin >> foodChoice;

        if (foodChoice == 0) {
            break; // Exit GrabFood
        }

        cout << "\n";

        switch (foodChoice) {
            case 1: {
                cout << "You selected Pizza.\n";
                cout << "Available Restaurants:\n";
                cout << "1. Domino's - RM 20\n";
                cout << "2. Pizza Hut - RM 18\n";
                cout << "Choose restaurant (1-2): ";
                cin >> restaurantChoice;

                if (restaurantChoice == 1) {
                    cout << "Order Confirmed: Pizza from Domino's (RM 20)\n";
                    totalBill += 20;
                } else if (restaurantChoice == 2) {
                    cout << "Order Confirmed: Pizza from Pizza Hut (RM 18)\n";
                    totalBill += 18;
                } else {
                    cout << "Invalid choice.\n";
                }
                break;
            }

            case 2: {
                cout << "You selected Burger.\n";
                cout << "Available Restaurants:\n";
                cout << "1. McDonald's - RM 12\n";
                cout << "2. Burger King - RM 15\n";
                cout << "Choose restaurant (1-2): ";
                cin >> restaurantChoice;

                if (restaurantChoice == 1) {
                    cout << "Order Confirmed: Burger from McDonald's (RM 12)\n";
                    totalBill += 12;
                } else if (restaurantChoice == 2) {
                    cout << "Order Confirmed: Burger from Burger King (RM 15)\n";
                    totalBill += 15;
                } else {
                    cout << "Invalid choice.\n";
                }
                break;
            }

            case 3: {
                cout << "You selected Rice.\n";
                cout << "Available Restaurants:\n";
                cout << "1. Nasi Kandar - RM 10\n";
                cout << "2. Mixed Rice - RM 8\n";
                cout << "Choose restaurant (1-2): ";
                cin >> restaurantChoice;

                if (restaurantChoice == 1) {
                    cout << "Order Confirmed: Rice from Nasi Kandar (RM 10)\n";
                    totalBill += 10;
                } else if (restaurantChoice == 2) {
                    cout << "Order Confirmed: Rice from Mixed Rice (RM 8)\n";
                    totalBill += 8;
                } else {
                    cout << "Invalid choice.\n";
                }
                break;
            }

            default:
                cout << "Invalid food choice.\n";
        }

        cout << "\nWould you like to order another item? (y/n): ";
        cin >> orderAgain;

    } while (orderAgain == 'y' || orderAgain == 'Y');

    // Final bill
    cout << "\n=====================================\n";
    cout << "           GrabFood Receipt           \n";
    cout << "=====================================\n";
    cout << "Total Amount: RM " << totalBill << "\n";
    cout << "Thank you for using GrabFood!\n";
    cout << "=====================================\n\n";
}
