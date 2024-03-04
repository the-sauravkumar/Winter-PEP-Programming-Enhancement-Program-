#include <iostream>
#include <unordered_map>

using std::cin;
using std::cout;
using std::unordered_map;

int fibonacci(int n)
{
    if (n <= 1)
        return n;

    unordered_map<int, int> fibMap;
    fibMap[0] = 0;
    fibMap[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        fibMap[i] = fibMap[i - 1] + fibMap[i - 2];
    }

    return fibMap[n];
}

int main()
{
    int n;
    cout << "Value: ";
    cin >> n;

    cout << "Fibonacci series up to " << n << " terms:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << fibonacci(i) << " ";
    }
    cout << "\n";
}
