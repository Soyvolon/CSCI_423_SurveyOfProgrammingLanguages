// A6_RobberRobber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>

int main()
{
    int plays;
    std::cout << "Please input the # of games to play: ";
    std::cin >> plays;

    std::list<int> playerScores;
    std::list<int> computerScores;

    time_t seed = time(NULL);
    unsigned int seedRaw = (unsigned)seed;
    srand(seedRaw);

    std::cout << "If no one testifies, you both get a year of jail time. If only one testifies, the other gets 5 years while the first gets 0.\
If both testify, both get 3 years jail time.\n\n";
    std::cout << "Actions:\n\
[1] - Say nothing\n\
[2] - Testify against the other\n";

    for (int i = 0; i < plays; i++)
    {
        std::cout << "Game # " << i;

        int action;
        std::cout << "\nPick an action: ";
        std::cin >> action;

        int compAction = (rand() % 2) + 1;
        
        int pScore = 0;
        int compScore = 0;

        if (action == 1 && compAction == 1)
        {
            pScore = 1;
            compScore = 1;
        }
        else if (action == 1 && compAction == 2)
        {
            pScore = 5;
            compScore = 0;
        }
        else if (action == 2 && compAction == 1)
        {
            pScore = 0;
            compScore = 5;
        }
        else if (action == 2 && compAction == 2)
        {
            pScore = 3;
            compScore = 3;
        }

        std::cout << "\nPlayer Jail Time: " << pScore << "\nComputer Jail Time: " << compScore << "\n";

        playerScores.push_back(pScore);
        computerScores.push_back(compScore);
    }

    double playerAvg = 0.0;
    std::list<int>::iterator pitr;
    for (pitr = playerScores.begin(); pitr != playerScores.end(); ++pitr)
        playerAvg += *pitr;
    playerAvg /= playerScores.size();

    double compAvg = 0.0;
    std::list<int>::iterator citr;
    for (citr = computerScores.begin(); citr != computerScores.end(); ++citr)
        compAvg += *citr;
    compAvg /= computerScores.size();

    std::cout << "\nPlayer Average Jail Time: " << playerAvg << "\nComputer Average Jail Time: " << compAvg;
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
