#include<iostream>
#include<vector>
#include<stack>
#include<unordered_map>
#include<unordered_set>

using namespace std;

void dfs(int start, unordered_map<int, vector<int>> &graph)
{
    stack<int> S;
    unordered_set<int> visited;

    S.push(start);

    while (!S.empty())
    {
        int top = S.top();
        S.pop();

        if (visited.find(top) == visited.end())
        {
            cout<<top<<" ";
            visited.insert(top);
        }

        for (int i=0; i<graph[top].size(); i++)
        {
            if (visited.find(graph[top][i]) == visited.end())
            {
                S.push(graph[top][i]);
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
    dfs(start, graph);

    return 0;
}