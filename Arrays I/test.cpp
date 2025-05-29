#include <iostream>
using namespace std;

int main()
{

    // TODO: Greatest number in the array

    // int arr[7] = {2, 3, 4, 2, 10, 54, 30};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int max = arr[0];
    // for (int i = 0; i <= size; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }
    // }
    // cout << "The greatest number in this array is: " << max << endl;
    // return 0;

    // TODO: linear Search

    // int arr[5] = {4, 2, 9, 12, 32};
    // int keyToFind = 9;
    // int index = -1;
    // int size = sizeof(arr) / sizeof(arr[0]);

    // for (int i = 0; i <= size; i++)
    // {
    //     if (arr[i] == keyToFind)
    //     {
    //         index = i;
    //     }
    // }

    // cout << "The index of element is : " << index;
    // return 0;

    //  TODO: reversing an array
    // int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int start = 0;
    // int end = size - 1;
    // while (start < end)
    // {

    //     // int temp = arr[start];
    //     // arr[start] = arr[end];
    //     // arr[end] = temp;
    //     swap(arr[start], arr[end]);
    //     start++;
    //     end--;
    // }
    // cout << "Array has been reversed" << endl;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // return 0;

    // TODO: Binary Search

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int start = 0;
    int end = size - 1;
    int keyToFind = 1;
    bool found = false;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == keyToFind)
        {
            cout << "The Key is present at: " << mid;
            found = true;
            break;
        }
        else if (arr[mid] > keyToFind)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (!found)
    {
        cout << "Desired key is not found";
    }
    return 0;
}