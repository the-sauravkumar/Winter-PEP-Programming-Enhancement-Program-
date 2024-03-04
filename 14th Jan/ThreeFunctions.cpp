#include <iostream>

using std::cout;
using std::cin;

// Function which accepts an integer argument and returns the square of it.

int doSq(int sq)
{
    return sq*sq;
}

// Function which accepts 2 characters as arguments and returns the sum of their ascii values

int ASCII_Sum(char a, char b)
{
    int temp1 = int(a);
    int temp2 = int(b);
    
    return temp1 + temp2;
}

// Function accepts int[] and its size as arguments and returns the sum of the array

    int sumArray(int arr[], int size)
    {
        int sum = 0;
        
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        return sum;
    }

int main()
{
    int sq;
    cin >> sq;
    cout << "Square of " << sq << ": " << doSq(sq);
    cout << "\n";
    // fflush(stdin);
    char ch1, ch2;
    cin >> ch1;
    cin >> ch2;
    cout << "Sum of " << ch1 << " and " << ch2 << ": "<< ASCII_Sum(ch1, ch2);
    cout << "\n";
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum of array: " << sumArray(arr, 5);
}