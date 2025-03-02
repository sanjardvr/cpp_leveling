#include "../../Core/Utils/Controls/controls.h"
class Unic : public Controls
{
private:
	string password;
public:
	std::string email;
	string title = "--------University Panel--------"; //? C++ OOP Runtime Polymorphism with Data Members
	Unic() // constructor
	{
		password = "";
	}
	void setPassword(string pswrd){
		password = pswrd;
	}
	string getPassword(){
		return password;
	}
}; 
void unic();