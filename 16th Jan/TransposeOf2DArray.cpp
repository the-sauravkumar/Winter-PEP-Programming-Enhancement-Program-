#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int arr[3][3];
    
    for (int i = 0; i <=2; i++)
    {
        for (int j = 0; j<=2; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    cout << "\n\n";
    
     for (int i = 0; i <=2; i++)
    {
        for (int j = 0; j <=2; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << "\n";
    }
}