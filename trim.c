#include<stdio.h>
int main(int argc,char **argv)
{
char s[28],s2[35],c;
int i,ws=0,p;
FILE *fp,*fp2;
if(argc==1)
{
printf("Enter filename\n");
scanf("%s",s);
if((fp=fopen(s,"r"))==NULL)
{
printf("Cannot open file for reading\n");
return 1;
}
i=-1;
while(s[++i]!='\0' || s[i]!='.')
s2[i]=s[i];
c=s[i];p=i;
s2[i]='_';
s2[++i]='t';
s2[++i]='r';
s2[++i]='i';
s2[++i]='m';
s2[++i]='\0';
if(c=='.')
{
while(s[p]!='\0')
{
s2[i++]=s[p++];
}
s2[i++]='\0';

}
}
else
{
if((fp=fopen(argv[1],"r"))==NULL)
{
printf("Cannot open file for reading\n");
return 1;
}
i=-1;
while(argv[1][++i]!='\0' && argv[1][i]!='.')
s2[i]=argv[1][i];
c=argv[1][i];p=i;
s2[i]='_';
s2[++i]='t';
s2[++i]='r';
s2[++i]='i';
s2[++i]='m';
s2[++i]='\0';
if(c=='.')
{
while(argv[1][p]!='\0')
{
s2[i++]=argv[1][p++];
}
s2[i++]='\0';
}

}if((fp2=fopen(s2,"w"))==NULL)
{printf("Cannot open file for writing\n");return 1;}


while(!feof(fp))
{
c=fgetc(fp);
if(c==' '||c=='\n'||c=='\t')
{
if(ws)
continue;
else {ws=1;fputc(c,fp2);}
}
else {ws=0;fputc(c,fp2);}
}
fclose(fp);
fclose(fp2);
}
