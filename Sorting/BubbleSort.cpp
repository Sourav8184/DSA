#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
            break;
    }
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
    bubbleSort(arr, size);
    printArr(arr, size);

    return 0;
}