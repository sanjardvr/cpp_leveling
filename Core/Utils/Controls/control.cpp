#include <iostream>
using namespace std;

int controlPanel()
{
    int choice;

    while (true)
    {
        cout << "--------Control Panel--------" << endl;
        cout << "Enter module (University 🏫) : 1" << endl;
        cout << "Enter module (Staff 👨‍💼) : 2" << endl;
        cout << "Enter module (Proffesor 👩‍🏫) : 3" << endl;
        cout << "Enter module (Student 👩‍🏫) : 4" << endl;
        cout << "Log Out ◀️ : 5" << endl;
        cout << "Exit the program ⛔: 6" << endl;
        cin >> choice;

        if (cin.fail())
        {
            cin.clear();             // Clear error flag
            cin.ignore(10000, '\n'); // Ignore invalid input
            cout << "Invalid input! Please enter a valid number.\n";
            continue; // Restart loop
        }

        switch (choice)
        {
        case 1:
            return 1;
            break;
        case 2:
            return 2;
            break;
        case 3:
            return 3;
            break;
        case 4:
            return 4;
            break;
        case 5:
            return 5;
            break;
        case 6:
            return 6;
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
            break;
        }
    }
}