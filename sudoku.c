//copied from daniweb.com
/*PROGRAM FOR SOLVING THE SUDOKU USING 'C'*/

#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<stdlib.h>

int i,j,k,a[10][10],o,x[100],y[100];

void display();
int getnum();
void solve(int [],int [],int);
int check(int ,int );

void main()
{
 printf("\n\nEnter the elements of SUDOKU in rowwise.\n[ Enter '0' if element is absent. ]");
 for(i=1;i<=9;i++)
 	for(j=1;j<=9;j++)
 		scanf("%d",&a[i][j]);
 printf("\n\nEntered SUDOKU\n\n");
 display();
 printf("\nEnter any key for solution....\n");
 getch();
 o=getnum();
 solve(x,y,1);
}

int getnum()
{
 int c=0;
 for(i=1;i<=9;i++)
 {
 	for(j=1;j<=9;j++)
  	{
   		if(a[i][j]==0)
		{
			c++;
			x[c]=i;
			y[c]=j;
		}
	}
 }
 return(c);
}


void display()
{
 for(i=1;i<=9;i++)
 {
 	for(j=1;j<=9;j++)
 	{
		if(a[i][j]!=0)
			printf("  %d",a[i][j]);
		else
			printf("  ");
	}
 printf("\n\n");
 }
}


void solve(int p[100],int q[100],int n)
{
 for(k=1;k<=9;k++)
	for(i=p[n];i<=p[n];i++)
		for(j=q[n];j<=q[n];j++)
		{
			a[i][j]=k;
			if(n<0)
				solve(p,q,n++);
			int ch=check(1,0);
			if(ch!=0)
			{
				display();
				getchar();
				exit(0);
			}
		}
}
}

   int check(int n,int r)
   {
    int f=0,cont=0;
    if(r==1)
    {
     for(k=1;k<=9;k++)
     {
      for(i=n;i<=n;i++)
      for(j=1;j<=9;j++)
      {
       if(k==a[i][j])
	f++;
       }
       if(f!=1)
	return(0);
       else
	cont++;
       f=0;
	}
	if(cont!=9)
	 return(0);
	else if(n==9)
	 check(1,0);
	else
	 check(n++,1);
	}
	else
	{
	 for(k=1;k<=9;k++)
	 {
	  for(i=1;i<=9;i++)
	  for(j=n;j<=n;j++)
	  {
	   if(k==a[i][j])
	    f++;
	   }
	   if(f!=1)
	    return(0);
	   else
	    cont++;
                   f=0;
	   }
	   if(cont!=9)
	    return(0);
	   else if(n!=9)
	    check(n++,1);
	    }
	   }
