#include <iostream>
using namespace std;
void Heapify(int arr[], int index, int size)
{
    int large = index;
    int left = index * 2 + 1;
    int right = index * 2 + 2;
    if (left < size && arr[large] < arr[left])
    {
        large = left;
    }
    if (right < size && arr[large] < arr[right])
    {
        large = right;
    }
    if (large != index)
    {
        int temp = arr[large];
        arr[large] = arr[index];
        arr[index] = temp;
        Heapify(arr, large, size);
    }
}

void buildMaxHeap(int arr[], int size)
{
    // step down apporach
    int index = (size / 2) - 1;
    while (index >= 0)
    {
        Heapify(arr, index, size);
        index--;
    }
}

void printHeap(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 4, 2, 6, 3, 8, 6, 10, 5, 7};
    buildMaxHeap(arr, 10);
    printHeap(arr, 10);
    return 0;
}