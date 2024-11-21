// undirected graph
#include<iostream>
#include<vector>
using namespace std;

// if no. of edge and all the edges are given etc. {{0, 1}, {0, 2}, {1, 2}}
vector<vector<int>> create_adj_matrix(int V, vector<pair<int, int>> &edges)
{
	vector<vector<int>> graph(V, vector<int>(V, 0));

	for (auto edge: edges)
	{
		graph[edge.first][edge.second] = 1;
		graph[edge.second][edge.first] = 1;
	}
	return graph;
}

int main()
{
	int V, E;
	cout<<"Enter number of vertex and edge: ";
	cin>>V>>E;
	
	vector<vector<int>> graph(V, vector<int>(V, 0));
	

	for (int i=0; i<E; i++)
	{
		int v,e;
		cout<<"enter edge v1 and v2: ";
		cin>>v>>e;

		graph[v][e] = 1;
		graph[e][v] = 1;
	}

	for (int i=0; i<V; i++)
	{
		for (int j=0; j<V; j++)
		{
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}