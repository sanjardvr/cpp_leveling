#ifndef PERSON
#define PERSON
class Person
{
private:
	int private_id;
	int password;

protected:
	int phoneNumber;
	std::string address;

public:
	std::string firstName;
	std::string lastName;
	int age;
	int public_id;
	bool isActive;

	Person() //constructor
	{
		isActive = true;
		password = private_id;
	}

    //Methods
};
#endif //PERSON