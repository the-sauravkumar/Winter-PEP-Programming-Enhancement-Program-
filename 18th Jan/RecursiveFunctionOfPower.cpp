#include <iostream>
using std::cout;
using std::cin;
// Recursive function to compute x^y
int power (int x, int y)
{
    if (y == 0) {
        return 1;
    }
    int ans = x * power(x, y - 1);
    return ans;
}

int main()
{
    int base, exp;
    cin >> base;
    cin >> exp;
    cout << power(base, exp);
}