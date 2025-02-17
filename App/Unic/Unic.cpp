#include <vector>
#include <string>
#include <iostream>
#include "Unic.h"
#include "../../Core/Utils/idGenerator.h"

class Unic
{
public:
	std::string firstName;
	std::string lastName;
	int age;
	int public_id;
	int department;
	bool isActive;
	Unic() //constructor
	{
		isActive = true;
		password = private_id;
		salary = 0;
	}
	void creteUnic(Unic obj, std::vector<std::string> vec);

private:
	int private_id;
	int password;

protected:
	float salary;
	int phoneNumber;
	std::string address;
};

void Unic::creteUnic(Unic obj, std::vector<std::string> dep)
{ 
	std::cout << "What is Unic's first name : ";
	std::cin >> obj.firstName;

	std::cout << "What is Unic's last name : ";
	std::cin >> obj.lastName;

	std::cout << "What is Unic's age :";
	std::cin >> obj.age;

	obj.public_id = idGenrator("25", 2);
	std::cout << "Here is the public ID of the Unic : " << obj.public_id << std::endl;

	std::cout << "Select your department and type its number : \n 1.CSI \t 2.BIS \t 3.MED" << std::endl;

	std::cin >> obj.department;

	std::cout << "\033[1;32m"; // Start bold green color
	std::cout << "A full information about the Unic :" << std::endl;
	std::cout << "First Name : " << obj.firstName << std::endl;
	std::cout << "Last Name : " << obj.lastName << std::endl;
	std::cout << "Age : " << obj.age << std::endl;
	std::cout << "Public ID : " << obj.public_id << std::endl;
	std::cout << "Department : " << dep[obj.department - 1] << std::endl;
	std::cout << "Is Active : " << obj.isActive << std::endl;

	std::cout << "\033[0m"; // Reset color to default
}

void unic()
{
	std::vector<std::string> dep = {"CSI", "BUS", "MED"};
	Unic mainObj;
	mainObj.creteUnic(mainObj, dep);
}
