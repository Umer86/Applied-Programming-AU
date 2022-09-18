// Import the libraries
#include <iostream>
// cmath library is used for mathematical functions
#include <cmath>
// Using the standard namespace
using namespace std;

// Main function from where the execution starts
int main()
{
    // Declare the variables
    int number, sum = 0;

    // Ask the user to enter the input number
    cout << "Enter the number: ";
    cin >> number;

    // We will use While loop as we are given the condition and 
    // it helps to iterate through the loop until the condition is true
    while(number >= 0)
    {
        // Add the number to the sum
        sum += number;

        // Ask the user to enter the input number
        cout << "Enter the number: ";
        cin >> number;
    }
    // Print the sum of all the numbers
    cout << "Sum of all the numbers is: " << sum;
}
