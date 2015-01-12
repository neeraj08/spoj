#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,*a,*b,*c,*d,i,j,k,l,s,s2,s3,r=0;
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
b=(int*)malloc(n*sizeof(int));
c=(int*)malloc(n*sizeof(int));
d=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d %d %d %d",a+i,b+i,c+i,d+i);
for(i=0;i<n;i++)
{s=a[i];
	for(j=0;j<n;j++)
	{s2=s+b[j];
		for(k=0;k<n;k++)
		{s3=s2+c[k];
			for(l=0;l<n;l++)
			if(s3+d[l]==0)r++;
		}
	}
}
printf("%d\n",r);
return 0;
}
