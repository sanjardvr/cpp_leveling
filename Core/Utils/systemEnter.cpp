#include <iostream>
#include "../System/login.h"
#include "../System/signup.h"
using namespace std;

bool systemEnter()
{
    int enter_choice;

    cout << "Welcome to University Management System admin panel !!!" << endl;
    while (true)
    { 
        cout << "\nPlease Signup/Login\n";
        cout << "1. Sign up\n2. Login\n";
        cout << "Enter your choice: ";

        cin >> enter_choice;

        // Check for input failure
        if (cin.fail()) 
        {
            cin.clear();  // Clear error flag
            cin.ignore(10000, '\n');  // Ignore invalid input
            cout << "Invalid input! Please enter a valid number.\n";
            continue;  // Restart loop
        }

        switch (enter_choice)
        {
        case 1:
            if (signup())
            {
                break;
            }
            break;
        case 2:
            if (login())
            {
                goto out_of_choice;
            }
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
            break;  
        }
    }

out_of_choice:
    cout << "\033[1;32m";
    cout << "You have successfully entered the system!" << endl;
    cout << "\033[0m";
    return true;
}
