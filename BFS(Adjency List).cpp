#include <iostream>
#include <queue>
#include<list>
using namespace std;

class Vertex
{
public:
	//Adjacency List of the vertex
	list<Vertex*> neighbors;

	char name ;
	bool visited = false;
	Vertex(){}
	Vertex(char name){ this->name = name;}
	
	//Method to connect vertices
	void addNeighbour(Vertex* v)
	{
		this->neighbors.push_back(v);
		v->neighbors.push_back(this);
	}
};
class BFS
{
public:
void bfs(Vertex* root)
{
	//Visit Root vertex and add to queue
	root->visited = true;
	queue<Vertex*> Queue;
	Queue.push(root);
	//BFS until queue is empty
	while(!Queue.empty())
	{
	//Pop a vertex and display
	Vertex* current_vertex=Queue.front();
	Queue.pop();
	cout << current_vertex->name << " ";
	
		//Loop through neighbors vertices
		for(Vertex* v: current_vertex->neighbors)
		{
			if(!v->visited)
			{
				//Visit and add neighbor vertices to the queue
				v->visited= true;
				Queue.push(v);
			}
		}
	}
}

};
int main()
{

	//create vertices
	Vertex v1('A'), v2('B'), v3('C'), v4('D'), v5('E');
	//connect vertices
	v1.addNeighbour(&v2);
	v1.addNeighbour(&v3);
	v2.addNeighbour(&v4);
	v3.addNeighbour(&v5);
	//Driver Code
	BFS b;
	b.bfs(&v1);
}
