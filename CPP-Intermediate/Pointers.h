#pragma once
class Pointers
{
public:
	~Pointers();
	int basics();
	int referenceTypes();
	int memoryManagement();

private:
	int passByValue(int num1);
	int passByRef(int &num1); // can also be declared as: int passByRef(int &);
};

