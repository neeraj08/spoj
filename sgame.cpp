#include<iostream>
#include<queue>
#include<cstring>
using namespace std;
int main()
{
	int t,i,j,f,start;
	scanf("%d",&t);
	
	while(t--)
	{
		int a,b,visited[301]={1},pos[301]={0};
		int adjlist[301][301]={0};
		queue<int> q;
		scanf("%d",&start);
		q.push(start);
		while(scanf("%d %d",&a,&b)==2)
		{
			if(a==-1)break;
			adjlist[a][pos[a]++]=b;
			visited[a]=visited[b]=0;
		}
		while(!q.empty())
		{
			a=q.front();
			q.pop();
			for(i=0;i<pos[a];i++)
			{
				b=adjlist[a][i];
				visited[b]=1;
				q.push(b);
				
			}
		}
		
	}
}
