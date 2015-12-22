// A C++ Program to detect cycle in an undirected graph
#include <iostream>
#include <list>
#include <limits.h>
#include <unistd.h>
 using namespace std;

// Class for an undirected graph
class Graph
{
	int V; // No. of vertices
	list<int> *adj; // Pointer to an array containing adjacency lists
	bool isCyclicUtil(int v, bool visited[], int parent);
    public:
	Graph(int V); // Constructor
	void addEdge(int v, int w); // to add an edge to graph
	void isCyclic(); // returns true if there is a cycle
};

Graph::Graph(int V)
{
	this->V = V;
	adj = new list<int>[V];
}

void Graph::addEdge(int v, int w)
{
	adj[v].push_back(w); // Add w to v’s list.
	adj[w].push_back(v); // Add v to w’s list.
}

// A recursive function that uses visited[] and parent to detect
// cycle in subgraph reachable from vertex v.

int g = 1;

bool Graph::isCyclicUtil(int v, bool visited[], int parent)
{
	// Mark the current node as visited
	visited[v] = true;

	// Recur for all the vertices adjacent to this vertex
	list<int>::iterator i;

	//** For testing purpose
    cout<<"Function Stack no="<<g++<<" "<<"v="<<v<<" "<<"parent="<<parent<<endl;
    sleep(1);
    int vsize = sizeof(visited)/sizeof(bool);
    for(int k=0;k<vsize;k++)
    	cout<<visited[k]<<" ";
    cout<<endl;
    //** For testing purpose

	for (i = adj[v].begin(); i != adj[v].end(); ++i)
	{
		// If an adjacent is not visited, then recur for that adjacent
		if (!visited[*i])
		{
		   if (isCyclicUtil(*i, visited, v))
			   return true;
		}

		// If an adjacent is visited and not parent of current vertex,
		// then there is a cycle.
		else if (*i != parent)
			
		return true;
	}
	return false;
}

// Returns true if the graph contains a cycle, else false.
void Graph::isCyclic()
{
	int nocycle = 1;
	int count = 1;
	bool *visited = new bool[V];
	for (int i = 0; i < V; i++)
		visited[i] = false;

	// Call the recursive helper function to detect cycle in different
	// DFS trees
	for (int u = 0; u < V; u++)
		if (!visited[u]){
        cout<<"Connected component no:"<<count++<<endl;  
		 // Don't recur for u if it is already visited
		if (isCyclicUtil(u, visited, -1))
			cout<<"Cycle detected : "<<nocycle<<endl;
		else cout<<"Cycle detected : NO"<<endl;
        }
	return;
}

// Driver program to test above functions

int main()
{
	Graph g1(7);
	g1.addEdge(0, 1);
	g1.addEdge(1, 2);
	//g1.addEdge(2, 3);
	g1.addEdge(3, 0);
	g1.addEdge(4, 5);
	g1.addEdge(5, 6);
	g1.addEdge(6, 4);
	//g1.addEdge(6, 8);


	g1.isCyclic(); //? cout << "Graph contains cycle\n":
				  // cout << "Graph doesn't contain cycle\n";

	/*
	Graph g2(3);
	g2.addEdge(0, 1);
	g2.addEdge(1, 2);
	g2.isCyclic()? cout << "Graph contains cycle\n":
				   cout << "Graph doesn't contain cycle\n";
	*/

	return 0;
}
