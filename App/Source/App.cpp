#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include "../../Core/Source/Core/Core.h"
#include "../../Core/Utils/commandPanelGenerator.h"
// #include "../../Core/Utils/controls.h"
#include "../Students/Students.h"
#include "../Professor/Professor.h"
#include "../Staff/Staff.h"
#include "../Unic/Unic.h"

    
int main()
{   
    vector<string> outputs = {"Enter module (University 🏫)", "Enter module (Staff 👨‍💼)", "Enter module (Proffesor 👩‍🏫)", "Enter module (Student 👩‍🏫)" , "Log Out ◀️" , "Exit the program ⛔"};
    cout << "--------Control Panel--------"<< endl;
    

    commandPanelGenerator(outputs);

    // logout:
    // if (Core::start())
    // {
    //     switch (controlPanel())
    //     {
    //     case 1:
    //        unic(); //superuser
    //         break;
    //     case 2:
    //        staff(); // moderator
    //         break;
    //     case 3:
    //         professor(); //admin
    //         break;
    //     case 4:
    //         student(); //user
    //         break;
    //     case 5:
    //        goto logout; 
    //        break;
    //     case 6:
    //        exit(0);
    //         break;
    //     default:
    //         break;
    //     }
    // }
    // else
    // {
    //     throw runtime_error("Access was denied!");
    // }
}
