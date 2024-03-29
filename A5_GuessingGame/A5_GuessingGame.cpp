﻿// A5_GuessingGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*

Write C++ program to play a simple one person game. First let the computer generate four random integer numbers between 
0 and 100 (inclusive). Then the program should ask user to guess a number that is in the middle of the numbers generated 
by the computer. That is, we want a number that is larger than two of the numbers generated by the computer and smaller 
than the other two numbers generated by the computer. the user will get 100 points if they manage that. If the user enters 
a number that is either larger than three computer numbers (and smaller than the fourth one) or smaller than three computer 
numbers (and larger than the fourht one) they will get 50 points. If the number user entered is smaller than all the computer 
numbers or larger than all computer numbers they will get 0 points. 

Let the user play the game 5 times and compute and display the total score. 

*/

#include <iostream>
#include<algorithm>
#include <list>

int main()
{
    std::cout << "How many times would you like to play? [number]: ";

    int plays;
    std::cin >> plays;

    time_t seed = time(NULL);
    unsigned int seedRaw = (unsigned)seed; 
    srand(seedRaw);

    int guess;
    std::list<int> scores;
    for (int i = 0; i < plays; i++)
    {
        std::cout << "---[ Starting Game " << i << " ]---\n";
        
        int vals[4];
        
        for (int z = 0; z < 4; z++)
        {
            vals[z] = rand() % 100;
        }

        int len = sizeof(vals) / sizeof(vals[0]);
        std::sort(vals, vals + len);

        std::cout << "Guess a number between 0 and 100: ";

        std::cin >> guess;

        int x = 0;
        for (x = 0; x < sizeof(vals) && guess > vals[x]; x++) {}

        int score = 0;
        if (x == 1 || x == 3)
            score = 50;
        else if (x == 2)
            score = 100;

        scores.push_back(score);

        std::cout << "Your score is: " << score << "\n";
    }

    double scoreSum = 0;
    std::list<int>::iterator itr;
    for (itr = scores.begin(); itr != scores.end(); ++itr)
        scoreSum += *itr;

    double finalScore = scoreSum / scores.size();
    std::cout << "---[ Final Score ]---\n" << finalScore;
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
