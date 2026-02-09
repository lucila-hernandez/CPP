/*
Lucila Hernandez Del Carmen
LAB 2E: Writing program that will define variables and initialize them. 
*/

#include <iostream>
#include <string>
using namespace std;


int main()
{
    // Defining variables
    char CHAR_VARIABLE;
    string string_variable;
    float float_variable_1, float_variable_2, float_variable_3;

    // Initializing variables
    CHAR_VARIABLE = 'Z';
    string_variable = " is for Zebra";
    float_variable_1 = 10.3, float_variable_2 = 20.55, float_variable_3 = 123.456;

    // Displaying values for character and string variable
    cout << "The value of the character variable is " << CHAR_VARIABLE << " and the value of the string variable" << string_variable << endl;
    
    // Adding float values together
    float combined_float_value = float_variable_1 + float_variable_2 + float_variable_3;

    // Output calculated float value total after addition
    cout << "The calculated value of the 3 float variables created is " << combined_float_value;
    return 0;
}