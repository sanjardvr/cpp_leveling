#include "../../Core/Utils/Controls/controls.h"
#include "../../Core/System/cardView.h"
class Unic : public CardView
{
private:
	string password;
public:
	std::string email;
	Unic(){};
	Unic(string title , vector < pair < string , function <void() >>> commands):CardView(title , commands) // constructor
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