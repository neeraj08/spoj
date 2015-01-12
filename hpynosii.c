#include<stdio.h>
int main(){unsigned long long int t,n,m,i,r;char c;scanf("%llu\n",&t);while(t--){n=0;while((c=getchar())!='\n'&&c!=EOF)n=n*10+c-48;for(i=0;n!=1&&i<8;i++){m=0;while(n){m+=(r=n%10)*(r);n/=10;}n=m;}if(i==8)printf("-1\n");else printf("%llu\n",i);}return 0;}
