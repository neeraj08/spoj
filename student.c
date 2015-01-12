#include<stdio.h>
#include<string.h>
struct student
{
char name[20];
int marks[6];
int total;
};
void display(struct student arr);
void calculate(struct student arr[]);
void sort(struct student arr[]);
main()
{
struct student stu[3],temp;
int i,j;
for(i=0;i<3;i++)
{
printf("enter the name  :");
gets(stu[i].name);
stu[i].total=0;
printf("enter marks in 6 subjects:  ");
for(j=0;j<6;j++)
scanf("%d",&stu[i].marks[j]);
}
calculate(stu);
sort(stu);
for(i=0;i<3;i++)
display(stu[i]);
}
void calculate(struct student stu[])
{
int i,j;
for(i=0;i<3;i++)
{
for(j=0;j<6;j++)
stu[i].total+=stu[i].marks[j];
}
}
void sort(struct student stu[])
{
int i,j;
struct student temp;
for(i=0;i<2;i++)
for(j=i+1;j<3;j++)
if(stu[i].total<stu[j].total)
{
temp=stu[i];
stu[i]=stu[j];
stu[j]=temp;
}
}
void display(struct student stu)
{
int i;
printf("name  %s",stu.name);
printf("  total   %d\t",stu.total);
printf("\n");
}

