#include<bits/stdc++.h>
using namespace std;

list<int>edge[4];

void addEdge(int a,int b)
{
	edge[a].push_back(b);
}

void BFS(int s,int v)
{
	bool visited[v];
	for(int i=0;i<v;i++)
	{
		visited[i]=false;
	}
	list<int>queue;
	visited[s]=true;
	queue.push_back(s);
	list<int>::iterator i;
	while(!queue.empty())
	{
		int m=queue.front();
		cout<<m<<" ";
		queue.pop_front();
		for(i=edge[m].begin();i!=edge[m].end();i++)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				queue.push_back(*i);
			}
		}
	}
}

int main()
{
	addEdge(0,1);
	addEdge(0,3);
	addEdge(2,3);
	addEdge(1,3);
	addEdge(2,0);
	addEdge(1,2);
	BFS(0,4);
	return 0;
}
