#include <iostream>
#include <queue>
#define SIZE 5
using namespace std;
//vertices
//array mapping to mark visited vertices
int visited[SIZE] = {0};
//Adjacency Matrix (Graph)
int adjacencyM[SIZE][SIZE] = {{0, 1, 1, 0, 0},
							  {1, 0, 0, 1, 0},
							  {1, 0, 0, 0, 1},
							  {0, 1, 0 ,0, 0},
							  {0, 1, 1, 0, 0}};

class BFS
{
public:
	void solve(int root,int vertices[])
	{
		queue<int> Queue;
		//Visit root node and add to the queue
		visited[root] = 1;
		Queue.push(root);
		//BFS until queue is empty
		cout<<"Traversed Tree is :\n";
		
		while(!Queue.empty())
		{
			//Pop the vertex and display
			int current_vertex= Queue.front();
			Queue.pop();
			cout << vertices[current_vertex] << " ";
			//add connected non-visited vertices to the queue
			int neighbor_Vertex;
			
			while((neighbor_Vertex =unvisitedNeighbor(current_vertex)) != -1)
			{
				//Mark neighbors as visited
				visited[neighbor_Vertex] = 1;
				Queue.push(neighbor_Vertex);
			}
		}
	}
	
	//Function returns index of unvisited connected vertices
	int unvisitedNeighbor(int index)
	{
		for(int i=0; i<SIZE; i++)
		{
			if(adjacencyM[index][i] == 1 && (visited[i] == 0))
			{
				return i;
			}
		}
	return -1;
	}
};

//Driver Code
int main() 
{
	BFS bfs;
	int a[100];
	cout<<"Enter 5 numbers:\n";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	

	bfs.solve(0,a);
	return 0;
}
