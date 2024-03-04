#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

int fibonacci(int n, std::vector<int>& memo) 
{
    if (n <= 1)
        return n;

    if (memo[n] != -1)
        return memo[n];

    memo[n] = fibonacci(n - 1, memo) + fibonacci(n - 2, memo);
    return memo[n];
}


int main() 
{
    int n;
    cout << "Value: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " terms:\n";
    vector<int> memo(n + 1, -1);
    for (int i = 0; i < n; ++i) 
    {
        cout << fibonacci(i, memo) << " ";
    }
   cout << "\n";
}