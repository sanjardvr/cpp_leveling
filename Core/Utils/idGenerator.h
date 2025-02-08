#include <iostream>
#include <string>
#include <ctime>
#include <random>
int idGenrator(std::string year, int staff)
{
        std::string id_string = "";

        //generating body
        std::random_device rd; // obtain a random number from hardware
        std::mt19937 gen(rd()); // seed the generator
        std::uniform_int_distribution<> distr(1000, 10000); 
        std::string body = std::to_string(distr(gen));

        
        std::string end = "";
        switch(staff)
        {
        case 1:
            end = "01";
            break;
        case 2:
            end = "02";
            break;
        case 3:
            end = "03";
            break;
        case 4:
            end = "04";
            break;
        default:
            throw ("wrong input");
        }
        id_string = year + body + end;
        int result = stoi(id_string);
        
        return result;
}