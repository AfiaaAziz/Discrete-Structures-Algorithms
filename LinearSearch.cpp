#include <iostream>
using namespace std;

int search(int arr[], int i, int j, int x)
{
    if (arr[i] == x)
    {
        return i;
    }
    else if (i == j)
    {
        return 0;
    }
    else
    {
        return search(arr, i + 1, j, x);
    }
}

int main()
{
    int n, x;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the element to search for: ";
    cin >> x;

    int result = search(arr, 0, n - 1, x);

    if (result == 0)
    {
        cout << "Element not found in the array." << endl;
    }
    else
    {
        cout << "Element found at index " << result << endl;
    }

    return 0;
}