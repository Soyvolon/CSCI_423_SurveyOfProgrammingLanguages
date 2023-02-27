// A12_Presidents.cpp : This file contains the 'main' function. Program execution begins and ends there.
/*

Write C++ program that will use standard template library Vector class to create a vector to hold five names of US presidents. 
Initialize that vector accordingly. Add code to print the content of the vector one name per line and then ask user for another 
US president and for location. Your program should insert the name entered by user at the location specified. For example if user 
enters location 2 the new name needs to be inserted as a second element in your vector.

If the user enters the value that is equal or larger than the number of items in the vector, the new name should be inserted at the 
end of the vector.

If the user eneters the value which is 0 or negative, the new item should be inserted at the front of the vector.

After the insertion print the content of the vector again (one item per line) to check if your code works correctly.

You may need to use getline function to get both the first and last name of the president from the command line.
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<string> presidents = {
        "George Washington",
        "John Adams",
        "Thomas Jefferson",
        "James Madison",
        "James Monroe"
    };
    vector<string>::iterator it;

    for (it = presidents.begin(); it < presidents.end(); it++)
        cout << *it << "\n";

    string name;
    cout << "Insert Presidents Name:\n";
    getline(cin, name);

    string istring;
    int index;
    cout << "Insert Insertion Index: ";
    getline(cin, istring);
    index = stoi(istring);

    if (index < 0)
        index = 0;
    else if (index >= presidents.size())
        index = presidents.size() - 1;

    it = presidents.begin();
    presidents.insert(it + index, name);

    for (it = presidents.begin(); it < presidents.end(); it++)
        cout << *it << "\n";
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
