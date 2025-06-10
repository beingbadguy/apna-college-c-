#include <iostream>
using namespace std;
int main()
{
    int arr[3][4];
    cout << "Start Entering Values : \n";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
        cout << "\n";
    }

    cout << "Print the 2D Array: ";
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    cout << "Print Done";
    return 0;
}