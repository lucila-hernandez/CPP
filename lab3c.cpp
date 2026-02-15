// Lucila Hernandez Del Carmen
// Lab 3C
// This program will prompt the user and read specific information.

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // Variables to store user inputs
    string prompt_1;
    char prompt_2;
    int prompt_3;
    char prompt_4;
    string prompt_5;

    // Prompt for user to write specific information 
    cout << "Please enter: Today is Tuesday" << endl;
    getline(cin, prompt_1);
    cout << "Please enter: X" << endl;
    cin.get(prompt_2);
    cout << "Please enter: 2021" << endl;
    cin >> prompt_3;
    cin.ignore();
    cout << "Please enter: Y" << endl;
    cin.get(prompt_4);
    cin.ignore();
    cout << "Please enter: Great!" << endl;
    getline(cin,prompt_5);

    // Output conects information 
    cout << prompt_1 << " " << prompt_2 << " " << prompt_3 << " " << prompt_4 << " " << prompt_5;
    return 0;
}