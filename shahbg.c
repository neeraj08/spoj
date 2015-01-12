#include<stdio.h>
int main()
{
int q;
int a[2000002]={0},x,res=0,i,j;
scanf("%d",&q);
while(q--)
{
	scanf("%d",&x);
	a[x]=1;
	if(a[x-1	] && a[x+1])
		res--;
	else
		if(!(a[x-1] || a[x+1]))
			res++;
printf("%d\n",res);		
}
puts("Justice");
return 0;
}
