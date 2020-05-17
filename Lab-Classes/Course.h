#pragma once
#include <iostream>
using namespace std;

#include "Student.h"
#include "Teacher.h"

class Course
{
private:
	Student* students[2];
	int studentsCount = 0;
	//Teacher* teacher = new Teacher();
	string title = "";

public:
	Course();
	Course(string title, Teacher* teacher);
	~Course();	
	void set_title(string title);
	string get_title();
	void add_student(Student* s);
	Teacher* teacher = new Teacher();
};

