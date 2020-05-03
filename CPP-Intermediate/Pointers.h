#pragma once
class Pointers
{
public:
	int Basics();
	int ReferenceTypes();

private:
	int passByValue(int num1);
	int passByRef(int &num1); // can also be declared as: int passByRef(int &);
};

