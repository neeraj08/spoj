#include <stdio.h>
int main()
{
int min,max,mid;
scanf("%d %d",&min,&max);
char str[5];
while(1)
{
mid=(max+min)/2;
printf("%d\n",mid);
scanf("%s",str);
if(str[0]=='L')
min=mid+1;
else
if(str[0]=='H')
max=mid-1;
else
break;
}
return 0;
}
