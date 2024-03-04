// write a program to input 5 integers from user, store it in an array in heap, and print its sum
#include <iostream>

using std::cout;
using std::cin;

int main() {
    int* ptr = new int[5];

    for (int i = 0; i < 5; ++i) {
        cin >> ptr[i];
    }

    int sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += ptr[i];
    }

    cout << sum;

    delete[] ptr;
}
