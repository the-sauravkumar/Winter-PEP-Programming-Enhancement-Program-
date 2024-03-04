#include <iostream>
#include <unordered_map>
#include <vector>

using std::cout;
using std::vector;
using std::unordered_map;
using std::cin;

int main() 
{
    vector<int> array;
    int size;
    cout << "Size: ";
    cin >> size;
    
    
    for(int i = 0; i < size; i++)
    {
        int temp;
        cin >> temp;
        array.push_back(temp);
    }
    

    unordered_map<int, int> frequencyMap;
    unordered_map<int, int> max_idx;

    for (int i = 0; i < size; i++) 
    {
        int num = array[i];
        frequencyMap[num]++;
        max_idx[num] = i;
    }

    for (const auto& pair : frequencyMap)
    {
        cout <<"Frequency [" << pair.first << "]: " << pair.second 
        << ", " << "Max Index: " << max_idx[pair.first] << "\n";
    }
}