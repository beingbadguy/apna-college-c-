#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main()
{

    // chars data type are stored in the form of integar also known as ASCII

    // ASCII - American Standard code of information interchange

    // TODO: Reverse an character array
    // char ch[] = "ihsuhk";
    // int size = strlen(ch);

    // int start = 0;
    // int end = size - 1;
    // while (start < end)
    // {
    //     swap(ch[start++], ch[end--]);
    // }

    // TODO: Check whether the string is palindrome or not

    // char name[] = "racecar";
    // int size = strlen(name);

    // int start = 0;
    // int end = size - 1;
    // bool isPalindrom = true;
    // while (start < end)
    // {
    //     if (name[start] != name[end])
    //     {
    //         isPalindrom = false;
    //         break;
    //     }

    //     start++;
    //     end--;
    // }

    // if (isPalindrom)
    // {
    //     cout << "It is a Palindrome" << endl;
    // }
    // else
    // {
    //     cout << "It is not a palindrome" << endl;
    // }
    char ch[100] = "Hello, World! ";
    char ch1[100] = "Aman Kumar";
    strcpy(ch, "How are you going to do ");
    strcat(ch, ch1);

    char str[] = "aman";
    // char str1[] = str.sort();
    // ;

    for (int i = 0; i < strlen(ch); i++)
    {
        cout << ch[i];
    }

    return 0;
}