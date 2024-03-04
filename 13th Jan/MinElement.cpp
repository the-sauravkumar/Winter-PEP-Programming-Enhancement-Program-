#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int size;
    cout << "Size: ";
    cin >> size;
    int arr[size], min_val;
    
    for (int i = 0; i < size; i++)
    {
        int temp;
        cout << "arr[" << i << "]: ";
        cin >> temp;
        arr[i] = temp;
    }
    min_val = arr[0];

    for (int i : arr)
    {
        if (i < min_val)
        {
            min_val = i;
        }
    }
    cout << "Minimum: " << min_val << " ";
}