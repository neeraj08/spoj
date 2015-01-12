#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<deque>
#include<vector>
#include<cmath>
#include<cstdlib>

using namespace std;

#define edge pair<int,int>//format (w,(u,v))
                          //(weights, (node,node))
deque<pair<double,edge> > G,MST;
deque<int> parent(1000);
int N,E,diff;
int total;
double sum;
deque<int> X,Y;

int findset(int x,deque<int>parent){
    if(x!=parent[x])
        parent[x]=findset(parent[x],parent);
    return parent[x];                    
}                                                                    

int Kruskal(){
    for(int i1=0;i1<N;i1++){ //calculate  distance between each node
        for(int j1=i1;j1<N;j1++){
            int A,B;
            double C;
            A=((X[i1]-X[j1])*(X[i1]-X[j1])); 
            B=((Y[i1]-Y[j1])*(Y[i1]-Y[j1]));
            C=sqrt(A+B);
            G.push_back(pair<double,edge>(C,edge(i1,j1)));
         }
    }

    E=G.size();//how many edges
    int i,pu,pv;
    sum=0;
    stable_sort(G.begin(),G.end());  
    for (i=total=0;i<E;i++){
        pu=findset(G[i].second.first, parent);
        pv=findset(G[i].second.second, parent);
        if(pu!=pv){
            MST.push_back(G[i]);
            total+=G[i].first;
            sum+=G[i].first;

            if(G[i].first>diff)
                return -1;
            parent[pu]=parent[pv];
        }
    }
    return 0;
}  

int main(){
    int t,nodes;
    double w;
    diff=0;
    for(cin>>t ; t>0 ; t--){
        N=0;
        diff=0;
        X.clear();
        Y.clear();
        MST.clear();
        G.clear();
        X.resize(0);
        Y.resize(0);

        cin>>N; //how many nodes
        for(int i=0; i<N; i++)
            parent[i]=i;
        cin>>diff;
        nodes=N;

        for(nodes; nodes>0;nodes--){        //coordinates of nodes
            int x,y;
            cin>>x;
            X.push_back(x); 
            cin>>y;
            Y.push_back(y);
        }

        int a=0;
        if(Kruskal()==0){
            a=sum;
            cout<<a<<endl;
        }
        else
            cout<<-1<<endl;           
    }
    system("pause");
    return 0;                                       
}