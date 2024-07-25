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
    void printHeap()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << endl;
        }
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

    return 0;
}