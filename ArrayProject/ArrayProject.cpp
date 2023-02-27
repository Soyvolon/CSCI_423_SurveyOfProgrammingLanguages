// ArrayProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <ctime>

// https://stackoverflow.com/a/9471648/11682098
// Random dist info
typedef std::mt19937 rng_type;
std::uniform_int_distribution<rng_type::result_type> udist(0, 100);

rng_type rng;

int main()
{
    int arry[20];

    int size = 20;
    rng_type::result_type const seedval = (unsigned)time(NULL);
    rng.seed(seedval);

    for (int i = 0; i < size; i++)
        arry[i] = udist(rng);

    for (int i = 0; i < size; i += 2)
        std::cout << arry[i] << " ";

    std::cout << "\n";

    for (int i = 1; i < size; i += 2)
        std::cout << arry[i] << " ";
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
