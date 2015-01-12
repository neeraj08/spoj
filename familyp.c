#include<stdio.h>
int main()
{
int i,n,s=0,arr[1500];char c=1;
for(i=1;s<1000001;i++)
{
s+=i;
arr[i]=s;
}
while(c!=EOF)
{
c=getchar();
for(i=1;n>arr[i];i++);
//printf("TERM %d is %c\n",n,65+((i-1)%26));
}
return 0;
}
