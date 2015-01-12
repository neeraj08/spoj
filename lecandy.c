#include<stdio.h>
int main(){int t,n,i,c,a,m;scanf("%d",&t);while(t--){m=0;scanf("%d %d",&n,&c);for(i=0;i<n;i++){scanf("%d",&a);m+=a;}if(m<=c)printf("Yes\n");else printf("No\n");}return 0;}
