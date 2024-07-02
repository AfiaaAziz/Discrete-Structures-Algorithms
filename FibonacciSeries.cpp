#include <iostream>
using namespace std;

// Function to calculate the nth Fibonacci number using recursion
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0; // Base case: F(0) = 0
    }
    else if (n == 1)
    {
        return 1; // Base case: F(1) = 1
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive step
    }
}

int main()
{
    int n;
    cout << "Enter a nonnegative integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid input! Please enter a nonnegative integer." << endl;
    }
    else
    {
        cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
        cout << "Fibonacci Sequence: ";

        for (int i = 0; i <= n; ++i) // Include 0 in the sequence
        {
            if (i == 0)
            {
                cout << 0;
            }
            else if (i == 1)
            {
                cout << ", " << 1;
            }
            else
            {
                int next = fibonacci(i);
                cout << ", " << next;
            }
        }
        cout << endl;
    }

    return 0;
}
