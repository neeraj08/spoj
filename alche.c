#include <stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
while(a!=-1 && b!=-1)
{
if(a/b==27 && a%b==(b/37))
putchar('Y');
else
putchar('N');
putchar('\n');
scanf("%d %d",&a,&b);
}
return 0;
}


