#pragma once

class Handle; // Forward reference. We need this so the compiler knows about Handle class

/* Friend classes
	We will use this class to illustrate the concept of friend classes
	using the Handle-Body idiom in C++

	Body class will contain the private members. 
	Internal details that you want to shield from the client program
*/
class Body
{
	friend class Handle;
private:	
	int someData; // Private member in Body Class
};

