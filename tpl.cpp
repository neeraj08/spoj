#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const unsigned int mod=1000000007;
ll modpow(ll a,ll b){if(b==1)return a;if(b&1)return (modpow(a*a%mod,b/2)*a)%mod;return modpow(a*a%mod,b/2)*a;}
const unsigned int psize=1000000;unsigned int proot;int p[psize],pos=0;
void sieve(){int i,j;proot=sqrt(psize);p[0]=p[1]=0;p[2]=1;for(i=3;i<psize;i+=2){p[i]=1;p[i+1]=0;}for(i=3;i<proot;i+=2)if(p[i])for(j=i*i;j<psize;j+=i+i)p[j]=0;/*squeeze-->*/	pos=0;p[pos++]=2;i=3;while(i<psize){if(p[i])p[pos++]=i;i+=2;}}
ll sumofdivs(int n)/*including 1 and n*/{	if(p[0]!=2)sieve();ll r=1,power;int j,i=0;while(i<pos && n>1){if(n%p[i]==0){power=p[i];while(n%p[i]==0){n/=p[i];power*=p[i];}r*=(power-1)/(p[i]-1);}i++;}return r;}
int sum_of_digits(int n){	int r=0;while(n){r+=n%10;n/=10;}return r;}
int is_palin(int n){int r=0,n2=n;while(n){r=r*10+n%10;n/=10;}if(r==n2)return 1;return 0;}
int compare(const void *a,const void *b){/*	if(((T)a)> ((T)b))*/return 1;return 0;}
int main()
{	int a[1000001],b,c,d,e,f,g,h,i,j,k,l,m,n,o,q,r,s,t,u,v,w,x,y,z;
	ll r,r2,res;
	char c,s[1000001],s2[1000001];
	//sieve();
//	vector<pair<int,int> > d;
//	printf("%lld\n",sumofdivs(284)-284);
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d\n",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",a+i);
		}
		//sort(a,a+n);//qsort(a,n,sizeof(a[0]),compare);
	}
	return 0;
}
