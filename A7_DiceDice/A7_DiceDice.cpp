// A7_DiceDice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <ctime>
#include <list>

// https://stackoverflow.com/a/9471648/11682098
// Random dist info
typedef std::mt19937 rng_type;
std::uniform_int_distribution<rng_type::result_type> udist(1, 6);

rng_type rng;

int main()
{
    int games;
    std::cout << "How many games do you want to play? ";
    std::cin >> games;


    rng_type::result_type const seedval = (unsigned)time(NULL);
    rng.seed(seedval);

    int playerScore = 0;
    int computerScore = 0;
    for (int i = 0; i < games; i++)
    {
        std::cout << "\nGame " << (i + 1) << "\n";

        rng_type::result_type gameGuess = udist(rng);

        unsigned int guess;
        std::cout << "Guess a number 1-6: ";
        std::cin >> guess;

        int score;
        if (guess >= gameGuess - 1 && guess <= gameGuess + 1)
        {
            playerScore += 1;
            std::cout << "The player wins!\n";
        }
        else
        {
            computerScore += 1;
            std::cout << "The computer wins!\n";
        }
    }

    if (computerScore > playerScore)
        std::cout << "\nThe computer wins all games with a score of " << computerScore << " to " << playerScore;
    else if (playerScore > computerScore)
        std::cout << "\nThe player wins all games with a score of " << playerScore << " to " << computerScore;
    else
        std::cout << "\nIts a tie!";
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
