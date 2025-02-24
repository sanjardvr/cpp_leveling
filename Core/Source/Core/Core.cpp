#include "Core.h"
#include <iostream>
#include "../../System/signup.h"
//for core components
//will be edited in the futute by adding database connections, third-app connections amd etc...


namespace Core {

	void PrintHelloWorld()
	{
		std::cout << "Hello World!\n";
		signup();
	}

}