#include <stdio.h>
int main()
{
unsigned long long int n,sum;
while(scanf("%llu",&n)==1)
{
if(n<10)printf("%llu\n",n*n);
else printf("%llu\n",(n/9)*81+(n/9)*(n/9));
}
return 0;
}
/*
          11111111111 
         11111111111
        11111111111 
       11111111111
      11111111111
     11111111111
    11111111111
   11111111111
  11111111111
 11111111111
11111111111



12345679010987654321             




*/
