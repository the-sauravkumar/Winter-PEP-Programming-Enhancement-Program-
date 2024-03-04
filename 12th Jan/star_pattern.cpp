
#include <iostream>

using std::cout;
using std::cin;

int main() 
{
    int a, temp = 0, count = 0;
    cin >> a;
    
    while (count < a)
    {
        while (temp <= count)
        {
            cout << "* ";
            temp++;
        }
        cout << "\n";
        temp = 0;
        count++;
    }
}