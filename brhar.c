#include <stdio.h>
int main()
{
float p,m,l;
scanf("%f %f %f",&p,&l,&m);
if(l)
if(!p && l/p<=m)
printf("yes");
else printf("no");
else printf("yes");
return 0;
}
