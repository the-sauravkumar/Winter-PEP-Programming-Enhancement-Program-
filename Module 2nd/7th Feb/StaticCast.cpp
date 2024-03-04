#include <iostream>
using std::cout;

int main() 
{
    double d = 3.14;
    int i = static_cast<int>(d);

    cout << "Value Before: " << d << "\n";
    cout << "Value After: " << i << "\n";
}
