#include <iostream>
#include <string>
#include <ctime>
#include <random>
#include "idGenerator.h"

string idGenrator(std::string year, int staff)
{
    if (staff < 1 || staff > 4)
    {
        throw invalid_argument("Invalid staff type");
    }

    // generating body
    std::random_device rd;  // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(1000, 10000);
    std::string body = std::to_string(distr(gen));

    std::string end = "0" + to_string(staff);
    return year + body + end;
}