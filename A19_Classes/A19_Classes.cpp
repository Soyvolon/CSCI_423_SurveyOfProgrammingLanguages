// A19_Classes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "University.h"

void printUni(University car);

int main()
{
    University uni("Garnder-Webb University", 50, 53);
    printUni(uni);

    uni = University("GWU", 25, 10);
    
    printUni(uni);
}

void printUni(University uni)
{
    std::cout << uni.getName() << ", Students: " << uni.getStudentCount() << ", Staff: " << uni.getStaffCount() << "\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
