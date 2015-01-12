#include <stdio.h>
int main()
{
int t,x,y;
scanf("%d",&t);
while(t--)
{
scanf("%d %d",&x,&y);
if(x==y)
{
	if(x%2==0)
		printf("%d\n",x*2);
	else
		printf("%d\n",x*2-1);
}
else
	if(x==y+2)
		{
		if(x%2==0)
			printf("%d\n",x*2-2);
		else
			printf("%d\n",x*2-3);
		}
	else
		printf("No Number\n");
}
return 0;
}
