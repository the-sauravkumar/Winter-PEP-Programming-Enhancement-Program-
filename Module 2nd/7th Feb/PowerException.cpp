#include <iostream>

using std::cout;
using std::cin;

int power(int x, int n) 
{
    
    if (n == 0)
        return 1;
    
    
    if (x == 0 || n <= 0)
        throw "Base 0 to non-positive exponent is undefined";
    
    
    return x * power(x, n - 1);
}


int main() 
{
    int n, x;
    cin >> n;
    cin >> x;
    cout << power(n, x);
    
}