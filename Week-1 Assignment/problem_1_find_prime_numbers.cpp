// Import the libraries
#include <iostream>
// cmath library is used for mathematical functions
#include <cmath>
// Using the standard namespace
using namespace std;

// Main function from where the execution starts
void main()
{
    // Write a program using for loops in C++ to find prime number within a range.
    // Declare the variables

    int start, end, i, j, flag;

    // Ask the user to enter the input number
    cout << "Enter the starting number: ";

    // Take the input from the user using cin which is standard input stream
    cin >> start;

    // Ask the user to enter the target/ending number
    cout << "Enter the ending number: ";

    // Take the input from the user
    cin >> end;

    // Print the prime numbers between the range
    cout << "Prime numbers between " << start << " and " << end << " are: ";

    // First for loop to iterate through the range
    for(i = start; i <= end; i++)
    {
        // Check if the number is prime or not
        if(i == 1 || i == 0) // || is the logical OR operator, 1 & 0 are not prime numbers
            continue; // continue is used to skip the current iteration and continue with the next iteration

        // Flag variable to tell if i is prime or not, if it is prime then flag = 1
        flag = 1; 

        // Second for loop to check if the number is prime or not
        for(j = 2; j <= i / 2; ++j)
        {
            // Check if the number is prime or not
            if(i % j == 0)
            {
                // Set the flag to 0 which means the number is not prime
                flag = 0;
                
                // Break the loop if the number is not prime
                break;
            }
        }
        // Check if the number is prime or not
        if (flag == 1)
            // Print the prime number
            cout << i << " ";
    }
}