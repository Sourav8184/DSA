#include <iostream>

using namespace std;

int BS_Using_Recursion(int arr[], int low, int high, int target)
{
    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target)
    {
        return mid;
    }
    else if (arr[mid] < target)
    {
        return BS_Using_Recursion(arr, mid + 1, high, target);
    }
    else
    {
        return BS_Using_Recursion(arr, low, mid - 1, target);
    }
}

int BS(int arr[], int n, int target)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = BS_Using_Recursion(arr, 0, n - 1, target);

    if (result == -1)
    {
        cout << "Element is not present in array" << endl;
    }
    else
    {
        cout << "Element is present at index " << result << endl;
    }
    int target2 = 5;
    int result1 = BS(arr, n, target2);
    if (result1 == -1)
    {
        cout << "Element is not present in array" << endl;
    }
    else
    {
        cout << "Element is present at index " << result1 << endl;
    }

    return 0;
}