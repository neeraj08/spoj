#include<stdio.h>
int main()
{
float x,y,p;
scanf("%f %f",&x,&y);
p=((y*0.96-x)/x*100);
printf("%.2f\n",p);
return 0;
}
