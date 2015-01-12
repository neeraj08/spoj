#include<stdio.h>
int main()
{
int r,R,i,j,p;char c,s[30001];
while(scanf("%s",s)==1)
{
p=-1;r=R=0;
while(c=s[++p])
{
if((p%2==0 && c>91)||(p%2 && c<91))
R++;
if((p%2==0 && c<91)||(p%2 && c>91))
r++;
}
if(r<R)printf("%d\n",r);
else printf("%d\n",R);
}

return 0;
}
