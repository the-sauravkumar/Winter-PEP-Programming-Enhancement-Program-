#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;

int main() 
{
    vector<int> v;
    
    int size;
    cin >> size;
    
   for(int i = 0; i < size; i++)
   {
       int temp;
       cin >> temp;
       v.push_back(temp);
   }
   
   int start = 0;
   int end = v.size() - 1;

    while (start < end) 
    {

        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;

    
        start++;
        end--;
    }

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }
}
