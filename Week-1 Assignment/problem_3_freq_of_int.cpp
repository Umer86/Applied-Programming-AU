#include <iostream>
// namespace std
using namespace std;

// Main function from where the execution starts
void main()
{
    // Declare the variables
    int number, digit, count = 0;

    // Ask the user to enter the input number
    cout << "Enter the number: ";
    cin >> number;

    // Ask the user to enter the digit to find the frequency
    cout << "Enter the digit to find the frequency: ";
    cin >> digit;

    // Do while loop to iterate through the number until the number is greater than 0
    do
    {
        // number % 10 returns the rightmost digit of the number
        // Check if the last digit of the number is equal to the digit to find the frequency
        if(number % 10 == digit)
        {
            // Increment the count
            count++;
        }
        // Divide the number by 10 to get the next digit
        number = number / 10;
    } while (number > 0);

    // Print the frequency of the digit
    cout << "Frequency of the digit " << digit << " is: " << count;
}