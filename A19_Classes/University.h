#pragma once
#include <cstring>
#include <iostream>
#include <cstddef>

class University
{
private:
	int studentCount;
	int staffCount;
	char* name;

public:
	University() : University("", 0, 0) {}
	University(const char* name) : University(name, 0, 0) {}
	University(const char* name, int students, int staff);

	int getStudentCount();
	int getStaffCount();
	char* getName();

	void setStudentCount(int students);
	void setStaffCount(int staff);
	void setName(const char* name);

	// as per https://en.cppreference.com/w/cpp/language/rule_of_three
	~University();
	University(const University& other) 
		: University(other.name, other.studentCount, other.staffCount) {}
	University& operator=(const University& other);
};