#include<stdio.h>
int main()
{
int n;float f;
scanf("%d %f",&n,&f);
if(n%5==0 && f-n>=0.5f)
printf("%.2f\n",f-n-0.5f);
else printf("%.2f\n",f);
return 0;
}
