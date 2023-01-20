// Assignment 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double kilomenter = 15;
    double inches;

    inches = kilomenter * 39370;

    std::cout << "Km: " << kilomenter << "\nin: " << inches;
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

/*
* 
We are going to start our journey with C++ by learning about console output, variables and 
their types and arithmetic operators. In the media gallery (you should have a link to it in the menu on the left ) 
there are seven (short) videos that discuss these topics. Watch these videos and try to learn how these things are done in 
C++, preferrably by writing some code on your own. You also need to write and submit the following two programs so I may 
judge for myself how much you learned. 

1. Write C++ program that converts kilometers to inches. That is oyu need to start with one variable holding the 
distance in kilometers and then you need to compute and assign to different variable the value of that distance in 
inches. Display to the user in console both the distance in kilometrs and the distance in inches. 

2. Write C++ program that will store the width and height of a rectangle in two variables and then compute and 
assign to another two variables the perimeter and the area of that rectangle. Display in the console the width, height, perimeter and area. 

You mustn't do any user input in neither of these programs, the initial values for 
distance or width and height should be hardcoded. 
You need to submit the two source files (.cpp files) that you create. Make sure that you name both differently, 
don't use generic main.cpp like the person in the videos
*/