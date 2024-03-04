#include <iostream>

using std::cout;

void merge(int arr[], int start, int mid, int end)
{
    int leftSize = mid - start + 1;
    int rightSize = end - mid;

    
    int leftArray[leftSize];
    int rightArray[rightSize];

    
    for (int i = 0; i < leftSize; i++)
        leftArray[i] = arr[start + i];

    for (int j = 0; j < rightSize; j++)
        rightArray[j] = arr[mid + 1 + j];

    
    int i = 0;     
    int j = 0;     
    int k = start; 

    while (i < leftSize && j < rightSize)
    {
        if (leftArray[i] <= rightArray[j])
        {
            arr[k] = leftArray[i];
            i++;
        }
        else
        {
            arr[k] = rightArray[j];
            j++;
        }
        k++;
    }

    while (i < leftSize)
    {
        arr[k] = leftArray[i];
        i++;
        k++;
    }

   
    while (j < rightSize)
    {
        arr[k] = rightArray[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int start, int end)
{
    if (start < end)
    {
        
        int mid = start + (end - start) / 2;

        
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        merge(arr, start, mid, end);
    }
}

void display(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    display(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    display(arr, size);
}
