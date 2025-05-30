#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size)
{

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < size - 1; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[8] = {43, 12, 1, 4, 2, 19, 27, 23};
    int size = sizeof(arr) / sizeof(arr);

    printArray(arr, size);
    bubbleSort(arr, size);
    printArray(arr, size);

  
}