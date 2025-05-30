#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
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
}

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {

        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        if (minIndex != i)
        {
            swap(arr[i], arr[minIndex]);
        }
    }
}
int main()
{
    int arr[8] = {43, 12, 1, 4, 2, 19, 27, 23};
    int size = sizeof(arr) / sizeof(arr[0]);

    printArray(arr, size);
    cout << "\n";
    // bubbleSort(arr, size);
    selectionSort(arr, size);

    cout << "\n";
    printArray(arr, size);
}