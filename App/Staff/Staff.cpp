#include <vector>
#include <string>
#include <iostream>
#include "Staff.h"
#include "../../Core/Utils/idGenerator.h"

void Staff::createStaff(Staff obj, std::vector<std::string> dep)
{ 
	std::cout << "What is Staff's first name : ";
	std::cin >> obj.firstName;

	std::cout << "What is Staff's last name : ";
	std::cin >> obj.lastName;

	std::cout << "What is Staff's age : ";
	std::cin >> obj.age;

	obj.public_id = idGenrator("25", 3);
	std::cout << "Here is the public ID of the Staff : " << obj.public_id << std::endl;

	std::cout << "Select your workspace and type its number : \n 1.Director \t 2.HR \t 3.Head of Department" << std::endl;

	std::cin >> obj.workspace;

	std::cout << "\033[1;32m"; // Start bold green color
	std::cout << "A full information about the Staff :" << std::endl;
	std::cout << "First Name : " << obj.firstName << std::endl;
	std::cout << "Last Name : " << obj.lastName << std::endl;
	std::cout << "Age : " << obj.age << std::endl;
	std::cout << "Public ID : " << obj.public_id << std::endl;
	std::cout << "Department : " << dep[obj.workspace - 1] << std::endl;
	std::cout << "Is Active : " << obj.isActive << std::endl;

	std::cout << "\033[0m"; // Reset color to default
}

void staff()
{
	std::vector<std::string> dep = {"Director", "HR", "Head of Department"};
	Staff mainObj;
	mainObj.createStaff(mainObj, dep);
	
}
