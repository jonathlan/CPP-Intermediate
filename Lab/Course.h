#pragma once
#include <string>

#include "Student.h"
#include "Teacher.h"

class Course
{
private:
	Student students[3];
	Teacher teacher;

public:
	Course()
	{
	}

	~Course()
	{
		delete students, teacher;
	}
};

