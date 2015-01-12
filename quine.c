#include<stdio.h>
int main()
{
FILE *f;
f=fopen("quine.c","r");
while(!feof(f))
putchar(fgetc(f));
return 0;
}
