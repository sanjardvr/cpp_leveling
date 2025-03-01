#ifndef CONTROL
#define CONTROL
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Controls
{
public:
    vector<string> commandOutputs = {"LogOut", "Exit Program"};
    vector<int> userChoice;
    string title = "--------Control Panel--------";

   int controlPanel(Controls obj);

   void listAllCommands(vector<string> vec)
   {
    commandOutputs.insert(commandOutputs.begin() , vec.begin() , vec.end());
   }
private:
   // function to generate list of commands
   void
   commandPanelGenerator(vector<string> vec)
   {
       for (int i = 0; i < vec.size(); i++)
       {
           cout << vec[i] << ": " << i + 1 << endl;
           userChoice.push_back(i+1);
       }
   }
};

#endif //CONTROL