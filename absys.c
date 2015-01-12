//spoj ABSYS
#include <stdio.h>
int my_atoi(char *p);
int main()
{
int t,a,b,c;
char arr[3][11];
scanf("%d",&t);
while(t--)
{
scanf("%s + %s = %s",arr[0],arr[1],arr[2]);
a=my_atoi(arr[0]);
b=my_atoi(arr[1]);
c=my_atoi(arr[2]);
if(a==-1)
a=c-b;
else if(b==-1)
	b=c-a;
else
if(c==-1)
c=a+b;
printf("%d + %d = %d\n",a,b,c);
}
return 0;

int my_atoi(char *p)
{
int dec=0,digit;
}
p--;
while(*++p!='\0')
if((digit=*p-48)<10)
dec=dec*10+digit;
else return -1;
return dec;
}


