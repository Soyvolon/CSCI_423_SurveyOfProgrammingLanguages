// A13_2DArrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Write C++ program that will create a 2D array with 4 rows and 5 columns. This should be classic build in C-style array. 
// Write code to fill the array with random integers in range 0-20 (inclusive). Then write the code to compute and display 
// the sum of numbers in each row of the array. 
// Thais is your program needs to display for numbers since the array has four rows. Finally display the array in nice tabular format. 

#include <iostream>
#include <random>
#include <ctime>

// https://stackoverflow.com/a/9471648/11682098
// Random dist info
typedef std::mt19937 rng_type;
std::uniform_int_distribution<rng_type::result_type> udist(1, 20);

rng_type rng;

int main()
{
    rng_type::result_type const seedval = (unsigned)time(NULL);
    rng.seed(seedval);

    int arry[4][5]{};
    for (int y = 0; y < std::size(arry); y++)
    {
        for (int x = 0; x < std::size(arry[y]); x++)
        {
            arry[y][x] = udist(rng);
        }
    }
    
    for (int y = 0; y < std::size(arry); y++)
    {
        int sum = 0;
        for (int x = 0; x < std::size(arry[y]); x++)
        {
            sum += arry[y][x];
        }
        std::cout << "[" << y << "]: " << sum << "\n";
    }

    std::cout << "\nTable:\n";

    for (int y = 0; y < std::size(arry); y++)
    {
        for (int x = 0; x < std::size(arry[y]); x++)
        {
            std::cout << arry[y][x];

            if (arry[y][x] < 10) {
                std::cout << " ";
            }

            std::cout << " | ";
        }
        std::cout << "\n";
    }
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
