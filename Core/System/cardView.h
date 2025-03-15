#ifndef CARDVIEW;
#define CARDVIEW;

#include "../Utils/Controls/controls.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class CardView : public Controls
{
    vector<pair<string,function<void()>>> commands;
    string title;
public:
    CardView(){};
    CardView(string title, vector<pair<string,function<void()>>> commands)
    : title(title) , commands(commands) {}

    void display()
    {
        system("clear");
        cout << "-------"<< title <<"------- " <<endl;
        vector <string> commandNames;
        int userChoice = 0;
        for (auto &cmd : commands)
        {
            commandNames.push_back(cmd.first);
        }
        listAllCommands(commandNames);
        int enteredNumber = controlPanel();
        commands[enteredNumber-1].second();
    }
}; 

#endif //CARDVIEW