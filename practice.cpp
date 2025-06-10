#include <iostream>
using namespace std;

void printArry(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubbleSort(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {

        bool isSwapped = false;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwapped = true;
            }
        }
        if (!isSwapped)
            break;
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
        swap(arr[i], arr[minIndex]);
    }
}

void insertionSort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int active = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > active)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = active;
    }
}
int main()
{

    // Bubble sort
    int arr[6] = {10, 23, 9, 1, 3, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before sorting: " << endl;
    printArry(arr, size);
    cout << endl;
    cout << "Array after sorting: " << endl;
    // bubbleSort(arr, size);
    // selectionSort(arr, size);
    insertionSort(arr, size);
    printArry(arr, size);
    return 0;
}