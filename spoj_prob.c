//know all problems solved by a user which u have not solved!!!!!

#include<string.h>
#include<stdio.h>
int main()
{
int my_noq,user_noq,i,j,total=0;
char my[100][20],user[200][20];
printf("Enter no. of problems solved by you\n");
scanf("%d",&my_noq);
printf("Enter code name of all solved problems(copy it from spoj/myaccount and paste)");
for(i=0;i<my_noq;i++)
scanf("%s",my[i]);

printf("Enter no. of problems solved by your competitor\n");
scanf("%d",&user_noq);
printf("enter code name of all solved problems(copy and paste)");
for(i=0;i<user_noq;i++)
scanf("%s",user[i]);


printf("\n\nLIST OF UNSOLVED PROBLEMS:\n");
for(i=0;i<user_noq;i++)
{
for(j=0;j<my_noq;j++)
if(!strcmp(user[i],my[j]))
break;
if(j==my_noq){printf("%s\n",user[i]);total++;}
}
if(total==0)printf("\nHURRAH! YOUR COMPETITOR HAS NO MORE SOLUTIONS THAN YOUR\n");
else printf("\nTOTAL=%d\n",total);
return 0;
}
