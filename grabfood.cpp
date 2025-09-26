#include <iostream>
#include <string>
#include "grabfood.h"
using namespace std;

void grabFood(Wallet &myWallet) {
    int foodChoice, restaurantChoice;
    double price = 0.0;
    string orderName;
    char orderAgain, confirm;

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
                    orderName = "Pizza from Domino's";
                    price = 20;
                } else if (restaurantChoice == 2) {
                    orderName = "Pizza from Pizza Hut";
                    price = 18;
                } else {
                    cout << "Invalid choice.\n";
                    continue;
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
                    orderName = "Burger from McDonald's";
                    price = 12;
                } else if (restaurantChoice == 2) {
                    orderName = "Burger from Burger King";
                    price = 15;
                } else {
                    cout << "Invalid choice.\n";
                    continue;
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
                    orderName = "Rice from Nasi Kandar";
                    price = 10;
                } else if (restaurantChoice == 2) {
                    orderName = "Rice from Mixed Rice";
                    price = 8;
                } else {
                    cout << "Invalid choice.\n";
                    continue;
                }
                break;
            }

            default:
                cout << "Invalid food choice.\n";
                continue;
        }

        // Confirmation step
        cout << "\nConfirm order: " << orderName << " (RM" << price << ")? (y/n): ";
        cin >> confirm;

        if (confirm == 'y' || confirm == 'Y') {
            // Deduct from wallet
            myWallet.deductMoney(price, "GrabFood - " + orderName);
        } else {
            cout << "❌ Order cancelled.\n";
        }

        cout << "\nWould you like to order another item? (y/n): ";
        cin >> orderAgain;

    } while (orderAgain == 'y' || orderAgain == 'Y');
}
