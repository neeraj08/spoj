#include<stdio.h>
int main()
{
int n;
while(!feof(stdin))
{
fscanf(stdin,"%d",&n);
if(n==1)printf("1\n");
else
printf("%d\n",2*(n-1));
}
return 0;
}
