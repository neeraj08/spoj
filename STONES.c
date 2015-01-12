#include<stdio.h>
int main()
{
int t,i,j,n,pos;
char c;
int arr[123];
char str[101];
scanf("%d\n",&t);
while(t--)
{
n=0;
for(i=65;i<=90;i++)
arr[i]=0;
for(i=97;i<=122;i++)
arr[i]=0;
scanf("%s",str);
pos=0;
while(str[pos]!='\0')
arr[str[pos++]]=1;
scanf("%s",str);
pos=0;
while(str[pos]!='\0')
if(arr[str[pos++]])
n++;
printf("%d\n",n);
}
return 0;
}
