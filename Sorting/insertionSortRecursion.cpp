#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> &arr, int i, int n)
{
    if (i == n)
        return;
    int j = i;
    while (j > 0 && arr[j] < arr[j - 1])
    {
        swap(arr[j], arr[j - 1]);
        j--;
    }
    insertionSort(arr, i++, n);
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
    insertionSort(arr, 0, size);
    printArr(arr, size);

    return 0;
}