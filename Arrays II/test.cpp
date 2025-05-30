#include <iostream>
using namespace std;

// void printArray(int arr[], int size)
// {

//     for (int start = 0; start < size; start++)
//     {

//         for (int end = start; end < size; end++)
//         {
//             for (int i = start; i <= end; i++)
//             {
//                 cout << arr[i];
//             }
//             cout << " ";
//         }
//         cout << endl;
//     }
// }



// void maxSubarraySum(int arr[], int size)
// {
//     int maxSum = INT_MIN;
//     for (int start = 0; start < size; start++)
//     {
//         for (int end = start; end < size; end++)
//         {
//             int varSum = 0;
//             for (int i = start; i <= end; i++)
//             {
//                 varSum = arr[i] + varSum;
//             }
//             if (varSum >= maxSum)
//             {
//                 maxSum = varSum;
//             }
//         }
//     }

//     cout << maxSum;
// }

// void maxSubarraySum2(int arr[], int size)
// {
//     int maxSum = INT_MIN;
//     for (int start = 0; start < size; start++)
//     {
//         int varSum = 0;
//         for (int end = start; end < size; end++)
//         {
//             varSum = arr[end] + varSum;
//             if (varSum >= maxSum)
//             {
//                 maxSum = varSum;
//             }
//         }
//     }

//     cout << maxSum;
// }

// void kadaneAlgo(int arr[], int size)
// {
//     int maxSum = INT_MIN;
//     int varSum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         varSum = arr[i] + varSum;
//         if (varSum > maxSum)
//         {
//             maxSum = varSum;
//         }
//         if (varSum < 0)
//         {
//             varSum = 0;
//         }
//     }
//     cout << maxSum;
// }



void maxProfit(int arr[], int size)
{
    int minPrice = arr[0];
    int maxProfit = 0;

    for (int i = 1; i < size; i++)
    {
        maxProfit = max(maxProfit, arr[i] - minPrice);
        minPrice = min(minPrice, arr[i]);
    }

    cout << "MAX PROFIT IS : " << maxProfit;
}

int main()
{
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    // printArray(arr, size);
    // kadaneAlgo(arr, size);
    maxProfit(arr, size);
    return 0;
}