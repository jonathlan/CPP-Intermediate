#pragma once

#include "Body.h"
/* Friend classes
	We will use this class to illustrate the concept of friend classes
	using the Handle-Body idiom in C++

	Handle class defines the public behavior. Like a wrapper for the Body class
	This is also an example of delegation. Body does some stuff in the background and Handle is the delegate.
*/
class Handle
{
private:
	Body* MyBody; // Handle class maintains an instance of the "Body" class

public:
	Handle();
	~Handle();

	// With this we will demonstrate the access to private members of Body Class
	void someOperationOnBodyClass();
};

