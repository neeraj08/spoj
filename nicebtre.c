#include<stdio.h>
int main()
{
char s[100001];
int i,t,res,max,val;
scanf("%d",&t);
s[0]='n';
while(t--)
{
	scanf("%s",s+1);
	max=0;
	val=1;
	i=0;
	while(s[++i])
	{
		if(s[i]=='l')
		{	
			if(s[i-1]!='l')
				val--;
		}else
		val++;
		if(val>max)
			max=val;
	}
	printf("%d\n",max);
}
return 0;	
}
