//
// Created by Shawn Plain on 10/2/23.
//
#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num;

    // Get user input and validate
    do
    {
        cout << "Enter a positive number > 0 0r -99 to quit: ";
        cin >> num;

        if (num == -99)
        {
            cout << "Exiting the program. . ." << endl;
            return 0; // exit
        }

        if (num <= 0)
        {
            cout << "Invalid input. Please enter a number > 0 or -99 to quit." << endl;
        }
    } while (num <= 0);


    while (num != -99)
    {
        while (num <= 0)
        {

            cout << "Invalid input. Please enter a number > 0 or -99 to quit." << endl;
            cin >> num;
            if (num == -99)
            {
                cout << "Exiting the program . . ." << endl;
                return 0;
            }
        }

        // Print Mersenne primes and count
        cout << "Mersenne primes between 1 and " << num << ":\n";

        int count = 0;
        //  int power = 1;
        //  int p = 0;
        for (int i = 2; i <= num; i++)
        {
            if (i < 2)
                continue; // Skip numbers less than 2
            bool isPrime = true;
            for (int j = 2; j <= sqrt(i); j++)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (!isPrime) continue; // Skip non-prime numbers
            int p = log2(i + 1); // using the Lucas-Lehmer Method for finding if a number is a Mersenne Prime
            if (pow(2, p) - 1 == i)
            {
                cout << i << " ";
                count++;
            }

        }

        cout << "\nTotal Mersenne prime numbers: " << count << endl;

        cout << "Enter a positive number > 0 0r -99 to quit: " << endl;
        cin >> num;

    }
    cout << "Exiting the program . . ." << endl;
    return 0;
}

