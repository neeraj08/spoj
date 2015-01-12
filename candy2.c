#include<stdio.h>
int main()
{
unsigned long long int i,j,k,n,r,row[3][3],max[3][3],val[3],max_value,par[3];
scanf("%llu",&n);
scanf("%llu %llu %llu",val,val+1,val+2);//1st bag
r=0;
for(i=0;i<3;i++)
{
row[i][0]=r;max[i][0]=val[i];
}

scanf("%llu %llu %llu",val,val+1,val+2);//2nd bag
r=1;
for(i=0;i<3;i++)
{
if(val[i]>max[i][0])
{
row[i][1]=row[i][0];max[i][1]=max[i][0];
row[i][0]=r;max[i][0]=val[i];
}
else
{
row[i][1]=r;max[i][1]=val[i];
}
}

scanf("%llu %llu %llu",val,val+1,val+2);//3rd bag
r=2;
for(i=0;i<3;i++)
{
if(val[i]>max[i][1])
{
if(val[i]>max[i][0])
{
row[i][2]=row[i][1];max[i][2]=max[i][1];
row[i][1]=row[i][0];max[i][1]=max[i][0];
row[i][0]=r;max[i][0]=val[i];
}
else
{
row[i][2]=row[i][1];max[i][2]=max[i][1];
row[i][1]=r;max[i][1]=val[i];
}
}
else
{
row[i][2]=r;max[i][2]=val[i];
}
}

for(r=3;r<n;r++)
{
scanf("%llu %llu %llu",val,val+1,val+2);//4th onwards bag
for(i=0;i<3;i++)
{
if(val[i]>max[i][2])
{
if(val[i]>max[i][1])
{
if(val[i]>max[i][0])
{
row[i][2]=row[i][1];max[i][2]=max[i][1];
row[i][1]=row[i][0];max[i][1]=max[i][0];
row[i][0]=r;max[i][0]=val[i];
}
else
{
row[i][2]=row[i][1];max[i][2]=max[i][1];
row[i][1]=r;max[i][1]=val[i];
}
}
else
{
row[i][2]=r;max[i][2]=val[i];
}
}
}//for in i ends
}//loop in r ends

max_value=0;
for(i=0;i<3;i++)
for(j=0;j<3;j++)
for(k=0;k<3;k++)
{
if(row[0][i]!=row[1][j] && row[0][i]!=row[2][k] && row[1][j]!=row[2][k])
{
	if(max[0][i]+max[1][j]+max[2][k]>max_value){max_value=max[0][i]+max[1][j]+max[2][k];par[0]=row[0][i];par[1]=row[1][j];par[2]=row[2][k];}
}
}
printf("%llu\n%llu\n%llu\n",par[0],par[1],par[2]);
return 0;
}
