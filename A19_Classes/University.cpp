#include "University.h"
University::University(const char* name, int students, int staff)
{
	std::size_t n{std::strlen(name) + 1};
	this->name = new char[n];
	std::memcpy(this->name, name, n);

	this->studentCount = students;
	this->staffCount = staff;
}

int University::getStudentCount()
{
	return this->studentCount;
}

int University::getStaffCount()
{
	return this->staffCount;
}

char* University::getName()
{
	return this->name;
}

void University::setStudentCount(int students)
{
	this->studentCount = students;
}

void University::setStaffCount(int staff)
{
	this->staffCount = staff;
}

void University::setName(const char* name)
{
	delete[] this->name;
	std::memcpy(this->name, name, std::strlen(name) + 1);
}

// Rule of Three Stuff

University& University::operator=(const University& other)
{
	if (this == &other)
		return *this;

	std::size_t n{std::strlen(other.name) + 1};
	char* new_name = new char[n];				// alloc
	std::memcpy(new_name, other.name, n);		// populate
	delete[] this->name;						// delete old

	this->name = new_name;

	this->studentCount = other.studentCount;
	this->staffCount = other.staffCount;
	return *this;
}

University::~University()
{
	delete[] this->name;

#ifdef _DEBUG
	std::cout << "University dtor executed" << "\n";
#endif
}