#include <iostream>
#include <vector>
using namespace std;

int selectMini(vector<int> &arr, int n, int miniIndex)
{
    int mini = miniIndex;
    for (int i = miniIndex + 1; i < n; i++)
    {
        if (arr[mini] > arr[i])
        {
            mini = i;
        }
    }
    return mini;
}

void selectionSort(vector<int> &arr, int n, int miniIndex)
{
    if (miniIndex == n)
        return;
    int mini = selectMini(arr, n, miniIndex);
    if (mini != miniIndex)
    {
        swap(arr[mini], arr[miniIndex]);
    }
    selectionSort(arr, n, miniIndex + 1);
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
    selectionSort(arr, size, 0);
    printArr(arr, size);

    return 0;
}