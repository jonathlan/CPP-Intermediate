#pragma once
class Pointers
{
public:
	int basics();
	int referenceTypes();

private:
	int passByValue(int num1);
	int passByRef(int &num1); // can also be declared as: int passByRef(int &);
};

