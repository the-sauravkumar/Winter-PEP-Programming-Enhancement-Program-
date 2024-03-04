#include <iostream>

using std::cout;
using std::cin;

void swap (int &a, int &b)
{
    int temp = a; // 5
    a = b; // 6
    b = temp; // 5
}

int main() {
   
    int a = 5, b = 6;
    swap (a, b);
    cout << a << " " << b;
}