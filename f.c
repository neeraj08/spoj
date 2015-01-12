#include<stdio.h>
int main()
{
FILE *fp;
int i;
if((fp=fopen("1.txt","w"))==NULL)
{
printf("Unable to open file\n");
return 1;
}
struct student{ch ar name[20];int age,marks;}st;
for(i=3;i;i--)
{
scanf("%s %d %d",st.name,&st.age,&st.marks);
fwrite(&st,sizeof(st),1,fp);
printf("ftell(fp)-> %ld\n",ftell(fp));
}
fseek(fp,0,SEEK_SET);
printf("AFTER fseek()         ftell(fp)-> %ld\n",ftell(fp));
for(i=3;i;i--)
{
fread(&st,sizeof(st),1,fp);
printf("ftell(fp)-> %ld\n",ftell(fp));
fseek(fp,sizeof(st),SEEK_END);
printf("ftell(fp)-> %ld\n",ftell(fp));
printf("%s %d %d\n\n",st.name,st.age,st.marks);
}
fclose(fp);
return 0;
}
