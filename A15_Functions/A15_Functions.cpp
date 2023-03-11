// A15_Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 
//It is time for another C++ assignment.In media gallery there are two new videos about basics of defining 
// simple functions in C++.
// 
//1. Write C++ function called evaluate_quadratic_function.This function should take four numerical parameters.
// The first three parameters represent the coefficients of the quadratic function and the fourth parameter represents 
// the value of x.The function should compute and return the value of that quadratic function for given x.For those who 
// forgot their algebra, a quadratic function ahs a form y = ax ^ 2 + bx + c and your C++ function should compute y 
// given a, b, c(these are the coefficients of the quadratic function) and d.
// 
//2. Write C++ function average_sequence that will take three parameters, the first two parameters are real numbers and 
// the third parameter should be a positive integer.The function should take the first two parameters and compute a 
// sequence of numbers in which the next number is the average of the previous two.For example, if the two input 
// numbers are 0 and 1 the sequence should be 0, 1, 0.5, 0.75, 0.625 ... the third value is 0.5 since this is 
// the average of 0 and 1, the fourth value is 0.75 since this is the average of 1 and 0.5 and so on.
// 
//The evaluation should stop when the function computes n - th element in the sequence, where n is the value 
// of the third function parameter.The function should return the nth value in the sequence.For example the 
// function call average_sequence(0, 1, 5) should return 0.625 since this is the fifth value in the sequence(computed above).
//

#include <iostream>
#include <vector>

float evaluate_quadratic_function(float a, float b, float c, float x)
{
    return a * (x * x) + b * x + c;
}

float average_sequence(float first, float second, float nth)
{
    float prev = first;
    float cur = second;
    for (int i = 0; i < nth - 2; i++)
    {
        float next = (prev + cur) / 2;
        prev = cur;
        cur = next;
    }

    return cur;
}

int main()
{
    float a, b, c, x;
    std::cout << "Input a: ";
    std::cin >> a;

    std::cout << "Input b: ";
    std::cin >> b;

    std::cout << "Input c: ";
    std::cin >> c;

    std::cout << "Input x: ";
    std::cin >> x;

    std::cout << "Quad Formula Res: " << evaluate_quadratic_function(a, b, c, x);

    float elm1, elm2, n;
    std::cout << "\nFirst Elem: ";
    std::cin >> elm1;

    std::cout << "\Second Elem: ";
    std::cin >> elm2;

    std::cout << "\Nth Value: ";
    std::cin >> n;

    std::cout << "Averages Res: " << average_sequence(elm1, elm2, n);
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
