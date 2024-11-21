#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<unordered_set>

using namespace std;

void bfs(int start, unordered_map<int, vector<int>> &graph)
{
    queue<int> Q;
    unordered_set<int> visited;

    Q.push(start);
    visited.insert(start);

    while (!Q.empty())
    {
        int front_item = Q.front();
        Q.pop();
        cout<<front_item<<" ";

        for (int i=0; i<graph[front_item].size(); i++)
        {
            if (visited.find(graph[front_item][i]) == visited.end())
            {
                Q.push(graph[front_item][i]);
                visited.insert(graph[front_item][i]);
            }
        }
    }
}

int main()
{
    int v = 4;
    unordered_map<int, vector<int>> graph = {
        {0, {1, 2}},
        {1, {0, 2, 3}},
        {2, {0, 1}},
        {3, {1}}
    };

    int start = 0;
    bfs(start, graph);

    return 0;
}