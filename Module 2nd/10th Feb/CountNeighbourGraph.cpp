#include <iostream>
#include <vector>
#include <unordered_map>

using std::cout;
using std::unordered_map;
using std::vector;
using std::pair;

unordered_map<int, int> countNeighbors(const vector<pair<int, int>>& graph) 
{
    unordered_map<int, int> neighborsCount;

    
    for (const auto& edge : graph) 
    {
        neighborsCount[edge.first]++;
        neighborsCount[edge.second]++;
    }

    return neighborsCount;
}

int main() 
{
    vector<pair<int, int>> graph = {{1, 2}, {1, 3}, {3, 2}, {3, 5}, {4, 2}, {4, 5}};

    unordered_map<int, int> neighborsCount = countNeighbors(graph);

    cout << "Number of neighbors for each node:" << "\n";
    for (const auto& pair : neighborsCount) 
    {
        cout << "Node " << pair.first << ": " << pair.second 
        << " neighbors" << "\n";
    }
}
