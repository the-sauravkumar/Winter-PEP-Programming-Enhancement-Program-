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

    for (int num : array) 
    {
        frequencyMap[num]++;
    }

    cout << "Frequency:" << "\n";
    for (const auto& pair : frequencyMap) 
    {
        cout << pair.first << ": " << pair.second << "\n";
    }
}