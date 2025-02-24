#include <iostream>
#include "../System/login.h"
#include "../System/signup.h"
using namespace std;

void systemEnter() {
    int enter_choice;
    bool isLoggedIn = false; // Flag to track login status

    cout << "Welcome to University Management System admin panel !!!" << endl;

    while (!isLoggedIn) { // Keep looping until login is successful
        cout << "\nPlease Signup/Login\n";
        cout << "1. Sign up\n2. Login\n";
        cin >> enter_choice;

        switch (enter_choice) {
            case 1:
                signup(); // Register a new user
                break;
            case 2:
                if (login()) { // Login function returns true if successful
                    isLoggedIn = true; // Exit the loop when logged in
                }
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
                break;
        }
    }

    cout << "You have successfully entered the system! You can now access other features.\n";
}
