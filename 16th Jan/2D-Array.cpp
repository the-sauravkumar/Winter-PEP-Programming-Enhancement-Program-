#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int arr[5][5];
    
    for (int i = 0; i <=4; i++)
    {
        for (int j = 0; j<=4; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    cout << "\n\n";
    
     for (int i = 0; i <=4; i++)
    {
        for (int j = 0; j <=4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}