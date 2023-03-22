// A17_NumbersAndStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void changeToUpper(char& c);
void normalize(int& i);

int main()
{
    char testC = 'a';
    std::cout << "Char: " << testC;
    changeToUpper(testC);
    std::cout << " | After Upper: " << testC << "\n\n";

    int testINeg = -1529;
    int testIPos = 1529;
    int testIZero = 0;
    std::cout << "Test Ints: " << testINeg << ", " << testIPos << ", " << testIZero;
    normalize(testINeg);
    normalize(testIPos);
    normalize(testIZero);
    std::cout << " | Result Ints: " << testINeg << ", " << testIPos << ", " << testIZero;
 }

void changeToUpper(char& c)
{
    c = std::toupper(c);
}

void normalize(int& i)
{
    if (i > 0)
        i = 1;
    else if (i < 0)
        i = -1;
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
