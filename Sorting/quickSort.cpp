#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high)
{
    int pivot = arr[low];
    int count = 0;

    for (int i = low + 1; i <= high; i++)
    {
        if (pivot > arr[i])
            count++;
    }

    int pivotIndex = low + count;

    swap(arr[low], arr[pivotIndex]);

    int start = low;
    int end = high;

    while (start < pivotIndex && end > pivotIndex)
    {
        while (arr[start] <= arr[pivotIndex])
        {
            start++;
        }
        while (arr[end] > arr[pivotIndex])
        {
            end--;
        }
        if (start < pivotIndex && end > pivotIndex)
        {
            swap(arr[start], arr[end]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int> &arr, int low, int high)
{

    if (low >= high)
        return;
    int index = partition(arr, low, high);
    quickSort(arr, low, index - 1);
    quickSort(arr, index + 1, high);
}

void printArr(vector<int> &arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int size;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    vector<int> arr(size);
    cout << "Enter" << size << " element of the array" << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    quickSort(arr, 0, size - 1);
    printArr(arr, size);
    return 0;
}