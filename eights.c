/*
192
442
692
942
*/#include <stdio.h>
int main()
{
int arr[4]={192,442,692,942};
unsigned long long int a,t;
scanf("%llu",&t);
while(t--)
{
scanf("%llu",&a);
a=a-1;
if(a/4)
printf("%llu",a/4);
printf("%d\n",arr[a%4]);
}


return 0;
}
