#include <iostream>
using namespace std;

// Function to calculate GCD using recursion
int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

int main()
{
    int a, b;
    cout << "Enter two nonnegative integers a and b: " << endl;
    cin >> a >> b;

    // Check for nonnegative integers
    if (a < 0 || b < 0)
    {
        cout << "Invalid input. Please enter nonnegative integers." << endl;
        return 1;
    }

    // Ensure a <= b by manually swapping if necessary
    if (a > b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

    // Calculate GCD
    int result = gcd(a, b);
    cout << "The GCD of " << a << " and " << b << " is: " << result << endl;

    return 0;
}
