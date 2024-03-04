#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

vector<vector<int>> buildAdjacencyList(int n, int m)
{
    vector<vector<int>> adjList(n + 1);

    for (int i = 0; i < m; ++i)
    {
        int x, y;
        cin >> x >> y;
        adjList[x].push_back(y);
        adjList[y].push_back(x);
    }

    return adjList;
}

void printAdjacencyList(const vector<vector<int>> &adjList)
{
    for (int i = 1; i < adjList.size(); ++i)
    {
        cout << i << ": ";
        for (int j : adjList[i])
        {
            cout << j << ' ';
        }
        cout << '\n';
    }
}

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> adjList = buildAdjacencyList(n, m);

    printAdjacencyList(adjList);
}
