#include<stdio.h>
int main()
{
int a,b,c,d,e;
while(scanf("%d%d%d",&a,&b,&c),a||b||c)
{
d=a>c?a-c:c-a;
if(d && d%b){printf("No accounting tablet\n");continue;}
printf("%d\n",d/b/3+(d/b%3>0));
}
return 0;
}
