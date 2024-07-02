#include <iostream>
using namespace std;


double power(double a, int n)
{
    if (n == 0)
    {
        return 1; // Base case: a^0 = 1
    }
    return a * power(a, n - 1); // Recursive step
}

int main()
{
    double a;
    int n;
    cout << "Enter a non-zero real number (a): ";
    cin >> a;
    cout << "Enter a non-negative integer (n): ";
    cin >> n;

    if (n < 0)
    {
        cout << "Invalid input! Please enter a non-negative integer for n." << endl;
    }
    else if (a == 0)
    {
        cout << "Invalid input! 'a' should be a non-zero real number." << endl;
    }
    else
    {
        cout << a << " raised to the power of " << n << " is " << power(a, n) << endl;
    }

    return 0;
}
