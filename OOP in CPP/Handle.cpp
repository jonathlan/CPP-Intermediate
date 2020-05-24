#include "Handle.h"

Handle::Handle()
{
	MyBody = new Body; // Create the Body object
}

Handle::~Handle()
{
	delete MyBody; // Release the memory of MyBody object
}

void Handle::someOperationOnBodyClass()
{
	// Because Handle is a friend of the Body class it can access it's private members
	MyBody->someData = 86;
}
