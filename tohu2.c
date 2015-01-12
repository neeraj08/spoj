#include <stdio.h>
int main()
{
int t,i,j;
char arr[100];
scanf("%d",&t);
while(t--)
{
for(j=1;j<100;j++)
{
scanf("%d",&i);
scanf(" %c",&arr[i]);
}
for(j=9;j<=72;j+=9)
if(arr[j]!=arr[j+9])
break;
if(j==81)
printf("YES\n");
else printf("NO\n");
}
return 0;
}
