#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
		int a,b,visited[301]={0};
		int odd=0;
		scanf("%d",&a);
		while(scanf("%d %d",&a,&b),a!=-1)
		{
			if(++visited[a]%2==0)
				odd--;
			else odd++;
		
			if(++visited[b]%2==0)
				odd--;
			else odd++;
		}
		if(!odd)
			puts("YES");
		else
			puts("NO");
	}
	return 0;
}
