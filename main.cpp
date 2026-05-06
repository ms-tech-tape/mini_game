#include <iostream>
#include <cstdlib>
using namespace std;

// Function declaration from tic_tac_toe.cpp
void playTicTacToe();

int main() {
    int choice;

    do {
        system("cls"); // Use "clear" on Linux/Mac
        cout << "=========================================\n";
        cout << "          MINI GAME PROJECT              \n";
        cout << "=========================================\n";
        cout << "         Developed in C++                \n";
        cout << "=========================================\n\n";
        cout << "  1. Play Tic Tac Toe\n";
        cout << "  2. Exit\n\n";
        cout << "=========================================\n";
        cout << "Enter your choice (1-2): ";
        cin >> choice;

        switch (choice) {
            case 1:
                system("cls");
                playTicTacToe();
                cout << "\nPress Enter to return to main menu...";
                cin.ignore();
                cin.get();
                break;

            case 2:
                cout << "\n=========================================\n";
                cout << "   Thank you for playing! Goodbye!       \n";
                cout << "=========================================\n";
                return 0;

            default:
                cout << "\nInvalid choice! Please try again.\n";
                cout << "Press Enter to continue...";
                cin.ignore();
                cin.get();
        }

    } while (true);

    return 0;
}