#include <vector>
#include <string>
#include <iostream>
#include "Professor.h"
#include "../../Core/Utils/idGenerator.h"

void Professor::creteProfessor(Professor obj, std::vector<std::string> dep)
{ 
	std::cout << "What is professor's first name : ";
	std::cin >> obj.firstName;

	std::cout << "What is professor's last name : ";
	std::cin >> obj.lastName;

	std::cout << "What is professor's age : ";
	std::cin >> obj.age;

	obj.public_id = idGenrator("25", 2);
	std::cout << "Here is the public ID of the professor : " << obj.public_id << std::endl;

	std::cout << "Select your department and type its number : \n 1.CSI \t 2.BIS \t 3.MED" << std::endl;

	std::cin >> obj.department;

	std::cout << "\033[1;32m"; // Start bold green color
	std::cout << "A full information about the Professor :" << std::endl;
	std::cout << "First Name : " << obj.firstName << std::endl;
	std::cout << "Last Name : " << obj.lastName << std::endl;
	std::cout << "Age : " << obj.age << std::endl;
	std::cout << "Public ID : " << obj.public_id << std::endl;
	std::cout << "Department : " << dep[obj.department - 1] << std::endl;
	std::cout << "Is Active : " << obj.isActive << std::endl;

	std::cout << "\033[0m"; // Reset color to default
}

void professor()
{
	std::vector<std::string> dep = {"CSI", "BUS", "MED"};
	Professor mainObj;
	mainObj.creteProfessor(mainObj, dep);
}
