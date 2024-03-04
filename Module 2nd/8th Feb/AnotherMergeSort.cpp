#include <iostream>
using namespace std;

// start is included end is last element + 1
void merge_sort(int ar[], int start, int end)
{
    cout << start << end << endl;
    if (start + 1 == end)
    {
        return;
    }
    int mid = (start + end) / 2;

    merge_sort(ar, start, mid);
    merge_sort(ar, mid, end);

    int temp[end - start];
    int i = 0;
    int ct1 = start;
    int ct2 = mid;

    while (ct1 < mid && ct2 < end)
    {
        if (ar[ct1] < ar[ct2])
        {
            temp[i] = ar[ct1];
            i++;
            ct1++;
        }
        else
        {
            temp[i++] = ar[ct2++];
        }
    }

    while (ct1 < mid)
        temp[i++] = ar[ct1++];
    while (ct2 < end)
        temp[i++] = ar[ct2++];

    for (int j = start; j < end; j++)
    {
        ar[j] = temp[j - start];
    }
}

int main()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    merge_sort(ar, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
}