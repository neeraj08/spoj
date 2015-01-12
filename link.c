#include<stdio.h>
struct student{char name[22],int marks;struct student *next;}*first,*auxiliary;
int main()
{
struct student tmp;
auxiliary=first=&tmp;
do
{
printf("Enter name and marks\n");
scanf("%s %d",tmp.name,&tmp.marks);
auxiliary.next=&tmp;
}
while(c=='Y' || c=='y');

auxiliary=first;
while(auxiliary!=NULL)
{
printf("%s %d\n",auxiliary.name,auxiliary,marks);
auxiliary=auxiliary.next;
}
return 0;
}
