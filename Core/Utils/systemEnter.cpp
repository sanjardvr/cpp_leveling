#include <iostream>
#include "../System/login.h"
#include "../System/signup.h"
using namespace std;

void systemEnter() {
    int enter_choice;
   
    bool a,b;
    cout << "Welcome to University Management System admin panel !!!" << endl;

    while (true) { // Keep looping until login is successful
        cout << "\nPlease Signup/Login\n";
        cout << "1. Sign up\n2. Login\n";
        cin >> enter_choice;

        switch (enter_choice) {
            case 1:
                if(signup()){
                    break;
                }
                break;
            case 2:
                if(login()){
                    goto out_of_choice;
                    break;
                }
                break;
            default:
                cout << endl;
                cout << "Invalid choice! Please try again.\n";
                break;
        }
        
    }
    out_of_choice:
    cout << "\033[1;32m";
    cout << "You have successfully entered the system!" << endl;
    cout << "\033[0m";
}
