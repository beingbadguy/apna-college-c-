#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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

void printSubarray(int *arr, int size)
{
    for (int start = 0; start < size; start++)
    {
        // for each pointer index
        for (int end = start; end < size; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

void kadaneAlgo(int *arr, int size)
{
    int maxSum = INT_MIN;
    int varSum = 0;

    for (int i = 0; i < size; i++)
    {
        varSum = varSum + arr[i];
        if (varSum > maxSum)
        {
            maxSum = varSum;
        }
        if (varSum < 0)
        {
            varSum = 0;
        }
    }
    cout << maxSum;
}

void selectionSort(int *arr, int size)
{

    for (int start = 0; start < size; start++)
    {

        int index = start;
        for (int end = start + 1; end < size; end++)
        {
            if (arr[end] < arr[index])
            {
                index = end;
            }
        }
        if (index != start)
        {
            swap(arr[start], arr[index]);
        }
    }
}




int main()
{

    int arr[5] = {4, 1, 2, 9, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printSubarray(arr, size);
    // kadaneAlgo(arr, size);
    cout << "Array before sorting \n";
    printArray(arr, size);
    // bubbleSort(arr, size);
    selectionSort(arr, size);
    cout << "Array after sorting \n";
    printArray(arr, size);

    //    bubble sort
    // selection sort
    // insertion sort
    // counting sort
    // built in sorting
}