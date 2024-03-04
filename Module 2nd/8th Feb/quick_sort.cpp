#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::swap;
using std::vector;

vector<int> quickSort(vector<int> &arr, int low, int high)
{
    if (low < high)
    {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (arr[j] < pivot)
            {
                i++;
                swap(arr[i], arr[j]);
            }
        }

        swap(arr[i + 1], arr[high]);

        int pivotIndex = i + 1;

        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
    return arr;
}

void display(vector<int> &arr)
{
    for(auto itr = arr.begin(); itr != arr.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout << "\n";
}

int main()
{
    vector<int> arr = {5, 3, 8, 4, 2, 7, 1};
    int size = arr.size();

    cout << "Original array: ";
    display(arr);

    arr = quickSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    display(arr);
}
