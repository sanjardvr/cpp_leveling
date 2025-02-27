#include "Core.h"
#include <iostream>
#include "../../Utils/systemEnter.h"

// for core components
// will be edited in the futute by adding database connections, third-app connections amd etc...

namespace Core
{

	bool start()
	{
		system("clear");
		if (systemEnter())
		{
			return true;
		}
	}

}