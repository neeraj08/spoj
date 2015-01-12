#include<stdio.h>
int main()
{
int t,n,r;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
if(n==1){printf("poor conductor\n");continue;}
else
{
printf("%d ",r=(n+3)/5);
switch(n%5)
{
case 0:if(r%2)printf("M R\n");else printf("A L\n");
break;
case 1:if(r%2)printf("W R\n");else printf("W L\n");
break;
case 2:if(r%2)printf("W L\n");else printf("W R\n");
break;
case 3:if(r%2)printf("A L\n");else printf("M R\n");
break;
case 4:printf("A R\n");
break;
}
}
}
return 0;
}
