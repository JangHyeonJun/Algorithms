#include <iostream>
#include <queue>
using namespace std;


struct edge
{
	int u, v, w;
	edge(int _u, int _v, int _w) : u(_u), v(_v), w(_w) {}
	bool operator<(const edge& other)
	{
		return this->w < other.w;
	}
};

const int max_node = 10000;


int V, E;


int main()
{
	cin >> V >> E;
	priority_queue<edge> pq;
	for (int i = 0; i < E; i++)
	{
		int depart, arrival, weight;
		cin >> depart >> arrival >> weight;
		pq.push(edge(depart, arrival, weight));
	}


	return 0;
}