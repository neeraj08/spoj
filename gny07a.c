//mispelling
#include <stdio.h>
int main()
{
int n,m,cnt,num=1;
char c;
scanf("%d",&n);
while(n--)
{
scanf("%d ",&m);
cnt=0;
printf("%d ",num++);
while((c=getchar())!='\n')
if(++cnt!=m)
putchar(c);
putchar('\n');
}
return 0;
}


