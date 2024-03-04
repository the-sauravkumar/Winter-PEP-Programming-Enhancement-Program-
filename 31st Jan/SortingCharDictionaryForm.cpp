#include <iostream>
#include <vector>
#include <algorithm>

using std::cin;
using std::cout;
using std::sort;
using std::vector;
using std::toupper;

bool compareCharacters(char a, char b) 
{
    if (toupper(a) == toupper(b)) 
    {
        
        return a < b;
    }
    return toupper(a) < toupper(b);
}

int main() 
{
   
   vector<char> charVector;
   int n;
   cin >> n;
   
   for (int i = 0; i < n; i++)
   {
       char temp;
       cin >> temp;
       charVector.push_back(temp);
   }

    
   sort(charVector.begin(), charVector.end(), compareCharacters);

    
    cout << "Sorted vector:" << "\n";
    for (char c : charVector) 
    {
        cout << c << " ";
    }
    cout << "\n";
}
