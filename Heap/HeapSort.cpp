#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void Heapify(int arr[], int index, int size)
{
    // o(1)
    while (index >= 0)
    {
        int large = index;
        int left = large * 2 + 1;
        int right = large * 2 + 2;
        if (left < size && arr[left] > arr[large])
        {
            large = left;
        }
        if (right < size && arr[right] > arr[large])
        {
            large = right;
        }
        if (large != index)
        {
            int temp = arr[large];
            arr[large] = arr[index];
            arr[index] = temp;
        }
        if (index - 1 < 0)
            break;
        index = (index - 1) / 2;
    }

    // o(n)
    // int large = index;
    // int left = index * 2 + 1;
    // int right = index * 2 + 2;
    // if (left < size && arr[left] > arr[large])
    // {
    //     large = left;
    // }
    // if (right < size && arr[right] > arr[large])
    // {
    //     large = right;
    // }
    // if (large != index)
    // {
    //     int temp = arr[large];
    //     arr[large] = arr[index];
    //     arr[index] = temp;
    //     Heapify(arr, large, size);
    // }
}

void MaxHeap(int arr[], int size)
{
    int index = (size - 1) / 2;
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

void sortArray(int arr[], int size)
{
    int index = size - 1;
    while (index >= 0)
    {
        int temp = arr[0];
        arr[0] = arr[index];
        arr[index] = temp;
        Heapify(arr, 0, index - 1);
        index--;
    }
}
int main()
{
    int arr[] = {1, 9, 2, 10, 3, 8, 4, 7, 5, 6};
    MaxHeap(arr, 10);
    cout << "Before Heap Sort" << endl;
    printHeap(arr, 10);
    sortArray(arr, 10);
    cout << "After Heap Sort" << endl;
    printHeap(arr, 10);
    // priority_queue<int> maxHeap;
    // priority_queue<int, vector<int>, greater<int>> minHeap;
    return 0;
}