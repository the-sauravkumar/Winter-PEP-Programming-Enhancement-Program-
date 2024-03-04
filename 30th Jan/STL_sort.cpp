#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::sort;

int main() 
{
    
    vector<char> charVector = {'c', 'a', 'b', 'z', 'm'};


    sort(charVector.begin(), charVector.end());

    cout << "Sorted characters: ";
    for (const auto& ch : charVector) 
    {
        std::cout << ch << " ";
    }
    cout << "\n";
}
