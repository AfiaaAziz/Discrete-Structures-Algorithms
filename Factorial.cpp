#include <iostream>
using namespace std;

// Recursive function to compute factorial
int factorial(int n)
{
    if (n == 0)
    {
        return 1; // Base case: 0! = 1
    }
    return n * factorial(n - 1); // Recursive step
}

int main()
{
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid input! Please enter a non-negative integer." << endl;
    }
    else
    {
        cout << "Factorial of " << n << " is " << factorial(n) << endl;
    }

    return 0;
}
