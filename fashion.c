#include<stdio.h>
int main(){int m[11],w[11],t,n,i,j,a,pm,pw,r;scanf("%d",&t);while(t--){for(i=0;i<11;i++)m[i]=w[i]=0;scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&a);m[a]++;}for(i=0;i<n;i++){scanf("%d",&a);w[a]++;}pm=pw=10;r=0;while(n--){while(m[pm]==0)pm--;while(w[pw]==0)pw--;r+=pm*pw;m[pm]--;w[pw]--;}printf("%d\n",r);}return 0;}
