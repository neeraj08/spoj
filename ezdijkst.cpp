#include <iostream>
#include <queue>
#include <list>
#include <vector>

#define INF 999999999
#define tr(c,i) for(typeof((c).begin()) i = (c).begin(); i != (c).end(); i++)

using namespace std;

typedef vector<int> vi;
typedef pair<int,int> ii;
typedef list<ii> lii;

class Graph
{
	int v_no,source,dest;
	lii * adj;
	vi D;
	
	void initializeD (int value);
	void relax (int start, int end, int weight);

public:
	Graph (int v_no)
	{
		this -> v_no = v_no;
		adj = new lii[v_no+1];
	}

	void addEdge (int start, int end, int weight);
	void dijkstra ();
	void printShortestDistance ();
};

void Graph :: initializeD (int value)
{
	D = vi (v_no+1,value);
}

void Graph :: relax (int start, int end, int weight)
{
	if (D[end] > D[start] + weight)
		D[end] =  D[start] + weight;
}

void Graph :: addEdge (int start, int end, int weight)
{
	ii node (weight, end);
	adj[start].push_back (node);
}

void Graph :: dijkstra ()
{
	//cout << "55\n";
	priority_queue< ii,vector<ii>,greater<ii> > Q;
	initializeD (INF);
	//cout << "58\n";
	cin >> source >> dest;
	D[source] = 0;
	Q.push (ii (0,source));
	//cout << "62\n";
	while (!Q.empty ())
	{
		ii top = Q.top ();
		Q.pop ();	
		int d = top.first;
		int v = top.second;
		if (d <= D[v])
		{
			tr(adj[v],it)
			{
				//cout << "73\n";
				int weight = it -> first;
				int vertex = it -> second;
				if (D[vertex] > D[v] + weight)
				{
					//cout << "78\n";
					D[vertex] = D[v] + weight;
					ii node (weight,vertex);
					Q.push (node);
				}
			}
		}
	}
}

void Graph :: printShortestDistance ()
{
	if (source == dest)
		cout << "0" << endl;
	else if (D[dest] != INF)
		cout << D[dest] << endl;
	else
		cout << "NO" << endl;
}

int main ()
{
	int t,ver,edges;
	cin >> t;
	while (t--)
	{
		cin >> ver >> edges;
		Graph G (ver);
		//cout << "93\n";
		for (int i = 0;i < edges;i++)
		{
			int start, end, weight;
			cin >> start >> end >> weight;
			G.addEdge (start, end, weight);
		}
		//cout << "100\n";
		G.dijkstra ();
		//cout << "102\n";
		G.printShortestDistance ();
	}
	return 0;
}
