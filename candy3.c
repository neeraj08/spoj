#include<stdio.h>
int main()
{
long long int t,i,v,m,n;
scanf("%lld",&t);
while(t--){
m=0;scanf("%lld",&n);for(i=0;i<n;i++){scanf("%lld",&v);m=(m+v)%n;}
if(m%n)
printf("NO\n");
else
printf("YES\n");}
return 0;
}
