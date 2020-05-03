#include "Pointers.h"
#include <iostream>

int Pointers::Basics()
{
	std::cout << "*********************" << std::endl;
	std::cout << "***POINTER BASICS****" << std::endl;
	std::cout << "*********************" << std::endl;
	int num = 3;

	/* POINTER VARIABLE
	 * is the reference that this is going to be a pointer
	 & ins this instance is known as the "Address of" 
	 and it allows to obtain the memory address of the variable
	 It could also be declared as: 
	 int *pNum = &num;
	 But the concept is the same, pNum is a pointer to an int
	 CAUTION: Always initalize a pointer with a value or another variable
	 int* pNum; Is NOT recommended
	 */
	int* pNum = &num;

	// This will print the memory address of the variable num, not the actual value "3"
	std::cout << "Pointer Num:" << pNum << std::endl; // 000000C78CB7F574

	/* THE DEREFERENCE OPERATOR
	  Dereference operator is the same as the pointer one, the star: *
	  But used in a different way.
	  Usint the dereference operator you gain access to the underlying value of the varible 
	  and not the memory address
	*/

	std::cout << "Pointer to variable num:" << pNum << std::endl; // 000000C78CB7F574
	std::cout << "Pointer to num using the dereference operator:" << *pNum << std::endl; // 3

	/*  What happens if we change the value of *pNum?
	  Then the value of num, will also be changed indirectly
	*/

	*pNum = 45;
	std::cout << "Pointer to num using the dereference operator:" << *pNum << std::endl; // 45
	std::cout << "Variable num:" << num << std::endl; // 45

	int second = *pNum; // This will give you access to the value stored at pNum memory address
	std::cout << "Variable second:" << second << std::endl; // 45


	/*  Pointers are specially useful when passing large amount of data
	  It's way lighter to pass only the memory address rather than the complete data structure
	  For example, when sharing arrays or complete classess.
	*/

	return 0;
}

int Pointers::ReferenceTypes()
{
	std::cout << "*********************" << std::endl;
	std::cout << "***REFERENCE TYPES***" << std::endl;
	std::cout << "*********************" << std::endl;

	/*  Also known as ALIAS of another type
	  They are declared with the & operator in a similaro way as to the pointers
	  Reference should always be initialized
	*/

	int num = 5;
	int &refNum = num; // & is not required in num, we can assign it directly
	// int& refNum2; // This is not acceptable
	std::cout << "num contains:" << num << std::endl; // 5
	std::cout << "refNum contains:" << refNum << std::endl; // 5

	// Now modify the value of num through refNum
	refNum++;

	std::cout << "num contains:" << num << std::endl; // 6 num is also incrementer because refNum is an alias on num
	std::cout << "refNum contains:" << refNum << std::endl; // 6
	// Both refNum and num are pointing to the same memory address
	std::cout << "refNum is located at:" << &refNum << " and num is located at" << &num << std::endl; // refNum is located at:000000CC4937FA84 and num is located at000000CC4937FA84
	
	/* References are commonly used in parameters to functions. 
	  So you can modify the outside parameter from the inside of the function
	  For that to happen we need to pass in a "reference" to our function
	*/

	std::cout << "In ReferenceTypes num contains:" << num << std::endl; // 6
	passByValue(num);
	std::cout << "Back in ReferenceTypes num contains:" << num << std::endl; // 6. num was not affected because it was not passed as a reference.
	passByRef(num);
	std::cout << "Back in ReferenceTypes num contains:" << num << std::endl; // 7. Because we passedd num as a reference passByRef() actually accessed the address of num and modified it using num1

	return 0;
}

int Pointers::passByValue(int num1)
{
	std::cout << "passByValue()" << num1 << std::endl; // 6
	num1++;
	std::cout << "passByValue()->" << num1 << std::endl; // 7

	return 0;
}

int Pointers::passByRef(int &num1)
{
	std::cout << "passByRef()" << num1 << std::endl; // 6
	num1++;
	std::cout << "passByRef()->" << num1 << std::endl; // 7

	return 0;
}