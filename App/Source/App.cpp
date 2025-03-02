#include <iostream>
using namespace std;
#include <string>
#include <vector>
#include <map>
#include "../../Core/Utils/Controls/controls.h"

#include "../../Core/Source/Core/Core.h"
#include "../Students/Students.h"
#include "../Professor/Professor.h"
#include "../Staff/Staff.h"
#include "../Unic/Unic.h"

int main()
{
    vector<string> outputs = {"Enter module (University)", "Enter module (Staff)", "Enter module (Proffesor)", "Enter module (Student)"};
    unic();
    // Controls obj;
    // cout << obj.title << endl;
    // obj.listAllCommands(outputs);
    // logout:
    // if (Core::start())
    // {
    //     switch (obj.controlPanel(obj))
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
