#include <iostream>
using namespace std;

class MaxHeap
{
    int *arr;
    int size;       // total element in the heap;
    int total_Size; // total size of the heap
public:
    MaxHeap(int n)
    {
        arr = new int[n];
        size = 0;
        total_Size = n;
    }

    void insertHeap(int value)
    {
        if (size == total_Size)
        {
            cout << "Heap overflow:" << endl;
            return;
        }
        arr[size] = value;
        int index = size;
        size++;
        while (index > 0 && arr[(index - 1) / 2] < arr[index])
        {
            int temp = arr[(index - 1) / 2];
            arr[(index - 1) / 2] = arr[index];
            arr[index] = temp;
            index = (index - 1) / 2;
        }
        cout << arr[index] << " inserted into the Heap " << endl;
    }

    void heapify(int index)
    {
        int largestIndex = index;
        int leftIndex = index * 2 + 1;
        int rightIndex = index * 2 + 2;
        if (leftIndex < size && arr[largestIndex] < arr[leftIndex])
        {
            largestIndex = leftIndex;
        }
        if (rightIndex < size && arr[largestIndex] < arr[rightIndex])
        {
            largestIndex = rightIndex;
        }

        if (largestIndex != index)
        {
            int temp = arr[index];
            arr[index] = arr[largestIndex];
            arr[largestIndex] = temp;
            heapify(largestIndex);
        }
    }

    void deleteHeap()
    {
        if (size == 0)
        {
            cout << "Heap is empty" << endl;
            return;
        }
        arr[0] = arr[size - 1];
        size = size - 1;
        if (size == 0)
        {
            return;
        }
        else
        {
            heapify(0);
        }
    }

    void printHeap()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    MaxHeap h1(10);
    h1.insertHeap(10);
    h1.insertHeap(14);
    h1.insertHeap(9);
    h1.insertHeap(20);
    h1.insertHeap(90);
    h1.insertHeap(100);
    h1.printHeap();
    h1.deleteHeap();
    h1.printHeap();

    return 0;
}