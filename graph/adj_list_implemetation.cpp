// undirected graph
#include<iostream>
#include<vector>
using namespace std;

// if no. of edge and all the edges are given etc. {{0, 1}, {0, 2}, {1, 2}}
vector<vector<int>> create_adj_list(int V, vector<pair<int, int>> &edges)
{
	vector<vector<int>> graph(V);

	for (auto edge: edges)
	{
		graph[edge.first].push_back(edge.second);
		graph[edge.second].push_back(edge.first);
	}
	return graph;
}

int main()
{
	int V, E;
	cout<<"Enter number of vertex and edge: ";
	cin>>V>>E;
	
	vector<int> graph[V];
	

	for (int i=0; i<E; i++)
	{
		int v,e;
		cout<<"enter edge v1 and v2: ";
		cin>>v>>e;

		graph[v].push_back(e);
		graph[e].push_back(v);
	}

	for (int i=0; i<V; i++)
	{
        cout<<i<<" -> ";
		for (int item: graph[i])
		{
			cout<<item<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}