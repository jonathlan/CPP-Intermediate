#include "Course.h"

Course::Course()
{
}

Course::Course(string title, Teacher* teacher)
{
	set_title(title);
	this->teacher = teacher;
}

Course::~Course()
{
	delete teacher;
}

void Course::set_title(string title)
{
	if (!title.empty())
		this->title = title;
}

string Course::get_title()
{
	return this->title;
}

void Course::add_student(Student* s)
{
	if (studentsCount <= 2)
	{
		students[studentsCount] = s;
		studentsCount++;
		cout << "Student: " << s->get_firstname() << " added" << endl;
	}
	else
		cout << "We only accept 3 students in this course" << endl;
}

