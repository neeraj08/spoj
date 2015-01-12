#include<stdio.h>
#include<string.h>
void swap(char *aa);
main()
{
char a[3];
int i,j;
printf("enter the names");
for(i=0;i<3;i++)
{
gets(a[i]);
}
for(j=0;j<3;j++)
{
swap(a[j]);
printf("%s\n",a[j]);
}
void swap(char *aa)
int i,j;
char *temp;
for(i=0;i<2;i++)
for(j=i+1;j<3;j++)
if((strcmp(char a[i],char a[j]))>0)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}

