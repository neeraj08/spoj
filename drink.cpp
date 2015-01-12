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
void print(double mw,double mi, double tw, double ti)
{
	
}
int main()
{	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,q,r,s,t,u,v,w,x,y,z;
	const double cw=4.19,ci=2.09,em=335;
	double mw,mi,tw,ti,mw2,mi2,tw2,ti2,h1,h2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf %lf %lf",&mw,&mi,&tw,&ti);
		h1=mw*tw*cw;
		h2=mi*ti*ci;
		if(tw>0 && ti<0)
	} 
	return 0;
}
