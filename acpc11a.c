#include<stdio.h>
int main()
{
char s[101][11],i,p;
int t,n,f;
scanf("%d",&t);
while(t--)
{
f=0;
p=100;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%s",s[i]);if(s[i][0]!='#')if(p!=100)f=1;else p=i;}
if(f || p==100)
for(i=0;i<n;i++)printf("%s ",s[i]);
else{for(i=p+1;i<n;i++)printf("%s ",s[i]);printf("%s ",s[p]);for(i=0;i<p;i++)printf("%s ",s[i]);}
putchar('\n');
}
return 0;
}
