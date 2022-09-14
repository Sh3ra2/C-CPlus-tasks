#include<iostream>
#include<map>
#include<list>
using namespace std;

template<typename T>
class Graph
{

	map<T,list<T> > adjList; //Don’t know what type of data we get
	
	public:
	Graph()
	{
	
	}
	void addEdge(T u, T v,bool bidir=true)
	{
	
		adjList[u].push_back(v);
		if(bidir)
		{
			adjList[v].push_back(u);
		}
	}
	
	void print()
	{
		//Iterate over the map
		for(auto i:adjList)
		{
			cout<<i.first<<"->";
			
			//i.second is LL
			for(T entry:i.second)
			{
			cout<<entry<<",";
			}
			cout<<endl;
		}
	}
	
	void dfsHelper(T node,map<T,bool> &visited)
	{
		//& is used as map is same for al node
		//Whenever to come to a node, mark it visited ,Traversing function
		visited[node] = true; //Mark Source node visit
		cout<<node<<" "; //Print Source node
		
		//Try to find out a node which is neigbour of current node and not yet visited
		for(T neighbour: adjList[node])
		{ 
			//List of source node
			if(!visited[neighbour])
			{
				dfsHelper(neighbour,visited); //For visit call dfs helper fun
			}
		}
	}
	
	void dfs(T src)
	{
		map<T,bool> visited; //Mark all nodes to unvisited
		dfsHelper(src,visited);
	}
};
	
int main()
{	
int a,b,c,d,e,f;
	Graph<int> g; // Deccleration on above/
	cout<<"\nEnter Vertices by 2 pairs:\n";
	cin>>a>>b>>c>>d>>e>>f;
	g.addEdge(a,b);
	
	g.addEdge(c,d);
	g.addEdge(e,f);
	cout<<"\nDFS Traversed Tree:\n";
	g.dfs(0);
	
	return 0;
}
