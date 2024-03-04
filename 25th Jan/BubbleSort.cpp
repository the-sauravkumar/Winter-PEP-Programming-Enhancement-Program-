#include <iostream>
using std::cout;

void SortIt(int arr[], int size) 
{
    for (int i = 0; i < size - 1; ++i) 
    {
        for (int j = 0; j < size - i - 1; ++j) 
        {
           
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[], int size)
{
     for (int i = 0; i < size; ++i) 
     {
        cout << arr[i] << " ";
     }
    cout << "\n";
}

int main() {
    const int size = 5;
    int arr[size] = {4, 2, 7, 1, 9};

    display(arr, size);
   
    SortIt(arr, size);

   display(arr, size);
}
