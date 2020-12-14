#include <iostream>
#include <cstring>

using namespace std;

void ReverseString(char *arr)
{
    size_t len = strlen(arr);

    cout << "Original String:" << arr << endl;

    if(len == 0)
    {
        cout << "Empty string" << endl;
        cout << "------------------------------" << endl;
        return;
    }
    else if(len == 1)
    {
        cout << "Single character string" << endl;
        cout << "------------------------------" << endl;
        return;
    }

    size_t start = 0, end = len - 1;

    char ch;
    while (start < end)
    {
        ch = arr[start];
        arr[start] = arr[end];
        arr[end] = ch;

        start++;
        end--;
    }

    cout << "Reversed String:" << arr << endl;
    cout << "------------------------------" << endl;
}

int main()
{
    char arr[] = {"My name is Nitin Gera"};
    ReverseString(arr);

    char arr1[] = {""};
    ReverseString(arr1);

    char arr2[] = {"c"};
    ReverseString(arr2);

    char arr3[] = {"abcde"};
    ReverseString(arr3);

    char arr4[] = {"abcdef"};
    ReverseString(arr4);

    return 0;
}
