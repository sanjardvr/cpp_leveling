#include <iostream>
#include <vector>
using namespace std;

#include "controls.h"

int Controls::controlPanel(Controls obj)
{
    int choice;
    while (true)
    {
        commandPanelGenerator(commandOutputs);
        cout << "Enter command: ";
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();             // Clear error flag
            cin.ignore(10000, '\n'); // Ignore invalid input
            cout << "\033[1;31m";
            cout << "Invalid input! Please enter a valid number.\n";
            cout << "\033[0m";
            continue; // Restart loop
        }
        return count(userChoice.begin() , userChoice.end(), choice) > 0 ? choice : 0;
    }
    return 0;
}

