#include "Pointers.h"
#include <iostream>

int Pointers::Excecute()
{
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
