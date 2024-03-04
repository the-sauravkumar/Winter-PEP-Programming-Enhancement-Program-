#include <iostream>

using std::cout;

template <typename T>
void incrementByOne(T &value)
{
value++;
}

int main()
{
int first = 5;
double second = 3.14;

cout << "Before: " << first << "\n";
incrementByOne(first);
cout << "After: " << first << "\n";

cout << "\nBefore: " << second << "\n";
incrementByOne(second);
cout << "After: " << second <<"\n";

}