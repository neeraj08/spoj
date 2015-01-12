#include<bits/stdc++.h>
using namespace std;
bool visited[20000];
struct node
{		char data[26];
        int mod;
};
void bfs(int x)//generate in order 1,10,11,100,101,110,111 and use atoi to convert to int and check for remainder
{
       queue<node> m;
       node temp,temp1,temp2;
       strcpy(temp.data,"1");
       temp.mod=1%x;
       visited[temp.mod]=1;
       m.push(temp);
       while(!m.empty())
       {
                        node temp=m.front();
                        m.pop();
                        if(temp.mod==0)
                        {
                                       puts(temp.data);
                                       break;
                        }
                        visited[temp.mod]=1;
                        strcpy(temp2.data,temp.data);
                        strcat(temp.data,"0");
                        strcpy(temp1.data,temp.data);
                        temp1.mod=((temp.mod<<3)+(temp.mod<<1))%x;
                        if(!visited[temp1.mod])
	                        m.push(temp1);
                        strcat(temp2.data,"1");
                        temp2.mod=((temp.mod<<3)+(temp.mod<<1)+1)%x;
                        if(!visited[temp2.mod])
	                        m.push(temp2);                
       }            
}
int main()
{
    int i,x,t;
    scanf("%d",&t);
    while(t--)
    {
              scanf("%d",&x);
              for(i=0;i<x;i++)
           	   visited[i]=0;
              bfs(x);
    }
    return 0;
}
    
