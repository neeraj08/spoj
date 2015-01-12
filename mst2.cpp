	#include<iostream>
#include<utility>
#include<queue>
using namespace std;
typedef pair<int,int> pii;
typedef pair<int,pii> pipii;

struct compare
{
	bool operator ()(pipii a,pipii b)
	{
		return a.first>b.first?true:false;
	}	
	
};

int main()
{
	pipii edges[100001],tmp;
	priority_queue<pipii,vector<pipii>,compare> Q;
	int i,j,n,m,x,y,w,visited[10001]={0};
	long long res=0;
	
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y>>w;////!!!!!!!OPTIMIZE HERE~!!!!!!!!!!!
		pipii qq;
		pii ww;
		ww.first=x;
		ww.second=y;
		qq.second=ww;
		qq.first=w;
		Q.push(qq);
	}
	cout<<"i="<<i<<endl;
	while(!Q.empty())
	{
		pii p;
		int x,y,w;
		tmp=Q.top();
		Q.pop();
		p=tmp.second;
		x=p.first;
		y=p.second;
		w=tmp.first;
//		cout<<"inside whileqqq\n";
		if(!visited[x] || !visited[y])
		{
			cout<<"True. adding "<<w<<endl;
			visited[x]=visited[y]=1;
			res+=w;
		}
		
	}
	cout<<res<<endl;
	return 0;
}
