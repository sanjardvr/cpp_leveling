#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "commandPanelGenerator.h"

void commandPanelGenerator(vector<string> outputs)
{
    for (int i = 0; i < outputs.size() ; i++){
        cout << outputs[i] << ": " << i+1 << endl;
    }
}
