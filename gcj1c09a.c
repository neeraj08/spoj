#include<string.h>
#include<math.h>
#include<stdio.h>
int main()
{
char s[100];

unsigned long long i,t,res,p,cas=1,base,len,val,found[130],value[130];
scanf("%llu\n",&t);
while(t--)
{
	for(i=48;i<58;i++)
		found[i]=0;	
	for(i=97;i<123;i++)
		found[i]=0;
		
	scanf("%s",s);
	len=strlen(s);
	base=0;
	i=-1;
	while(s[++i])
	{
		if(!found[s[i]])
		{
			found[s[i]]=1;
			base++;
		}	
	}
	i=0;
	while(s[i]==s[i+1])
	i++;
	value[s[0]]=1;	
	found[s[0]]=2;///i.e. now given a value
	
	value[s[i+1]]=0;
	found[s[i+1]]=2;
	i++;
	val=2;
	while(s[++i])
	{
		if(found[s[i]]!=2)
		{
			found[s[i]]=2;
			value[s[i]]=val++;
		}
	
	}
	p=pow(base,len-1);
	res=0;
	i=-1;
	while(s[++i])
	{
		res+=value[s[i]]*p;
		p=p/base;
	}
	printf("Case #%llu: %llu\n",cas++,res);
}
return 0;
}
