//student proxy
#include <stdio.h>
int main()
{
int n,i,a,atten=0,students=0;
static int arr[101];
arr[0]=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a);
arr[a]++;
}
i=101;
while(--i)
{
while(arr[i]--)
{
atten+=i+1;
students++;
if(atten>=n)
goto end;
}
}
end:printf("%d\n",students);
return 0;
}
