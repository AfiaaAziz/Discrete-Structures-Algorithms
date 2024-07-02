#include <iostream>
#include <algorithm>
using namespace std;

// Function to perform binary search
int binary_search(int arr[], int n, int x)
{
    int i = 0, j = n - 1;

    while (i <= j)
    {
        int mid = i + (j - i) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            j = mid - 1;
        else
            i = mid + 1;
    }

    return -1;
}

int main()
{
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Sort the array
    sort(arr, arr + n);

    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x;
    cout << "Enter the element to be searched: ";
    cin >> x;

    int result = binary_search(arr, n, x);
    if (result == -1)
        cout << "Element not present in array" << endl;
    else
        cout << "Element found at index " << result << endl;

    delete[] arr;

    return 0;
}
