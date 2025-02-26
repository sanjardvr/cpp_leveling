#include <iostream>
using namespace std;
#include <string>
#include "../../Core/Source/Core/Core.h"
#include "../Students/Students.h"
#include "../Professor/Professor.h"
#include "../Staff/Staff.h"
#include "../Unic/Unic.h"

void hello(){
    cout <<  "You entered A" << endl;
}
int main()
{
    //unic(); //?superuser
    //staff(); //?moderator
    //professor(); //?admin
    //student(); //?user
    Core::PrintHelloWorld();



    //! The way to create a reapeat asking users valid input
    // char a;
    // cout <<  "Enter char A : " ;
    // cin >> a;
    // while(true){
    //     if (a == 'A'){
    //         hello();
    //         break;
    //     }else{
    //         cout << "You have enterd wrong char" << endl;
    //         cout <<  "Enter char A : " ;
    //         cin >> a;
    //     }
    // }
    
        
}

