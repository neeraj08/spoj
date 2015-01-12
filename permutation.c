/*permutations of a 7 alphabet word that may have 4 or more alphabets
DATE	--> 29 JAN 2012
CREATOR	--> NEERAJ LAKHOTIA
*/
#include <stdio.h>
int is_vowel(char);
int main()
{
int i,j,k,l,m,n,o;
char str[]="ABCDFGH";
// 'D' i.e. str[3] will be contained in all words
//4 alphabet words
printf("4 ALPHABET WORDS ARE:\n");
for(i=0;i<7;i++)
{
for(j=0;j<7;j++)
if(i!=j)
	{
	for(k=0;k<7;k++)
	if(k!=i && k!=j)
		{
		for(l=0;l<7;l++)
		if((l!=i && l!=j && l!=k)&&(str[i]==str[3] || str[j]==str[3] || str[k]==str[3] || str[l]==str[3]) && (is_vowel(str[i]) || is_vowel(str[j]) || is_vowel(str[k]) || is_vowel(str[l])) && !(is_vowel(str[i]) && is_vowel(str[j]) && is_vowel(str[k]) && is_vowel(str[l])))
			{
			printf("%c%c%c%c \t",str[i],str[j],str[k],str[l]);
			}
		}	
	}
printf("\n\n");
}


//5 alphabet words
printf("\n\n5 ALPHABET WORDS ARE:\n");
for(i=0;i<7;i++)
{
for(j=0;j<7;j++)
if(i!=j)
	{
	for(k=0;k<7;k++)
	if(k!=i && k!=j)
		{
		for(l=0;l<7;l++)
		if(l!=i && l!=j && l!=k)
			{
			for(m=0;m<7;m++)
			if((m!=i && m!=j && m!=k && m!=l)&&(str[i]==str[3] || str[j]==str[3] || str[k]==str[3] || str[l]==str[3] || str[m]==str[3] )
&& (is_vowel(str[i]) || is_vowel(str[j]) || is_vowel(str[k]) || is_vowel(str[l]) || is_vowel(str[m])) && !(is_vowel(str[i]) && is_vowel(str[j]) && is_vowel(str[k]) && is_vowel(str[l]) && is_vowel(str[m])))				{
				printf("%c%c%c%c%c \t",str[i],str[j],str[k],str[l],str[m]);				
				}
			}
		}	
	}
printf("\n\n");
}


//6 alphabet words
printf("\n\n6 APLHABET WORDS ARE:\n");
for(i=0;i<7;i++)
{
for(j=0;j<7;j++)
if(i!=j)
	{
	for(k=0;k<7;k++)
	if(k!=i && k!=j)
		{
		for(l=0;l<7;l++)
		if(l!=i && l!=j && l!=k)
			{
			for(m=0;m<7;m++)
			if(m!=i && m!=j && m!=k && m!=l)
				{
				for(n=0;n<7;n++)
				if((n!=i && n!=j && n!=k && n!=l &&n!=m)&&(str[i]==str[3] || str[j]==str[3] || str[k]==str[3] || str[l]==str[3] || str[m]==str[3] || str[n]==str[3]) && (is_vowel(str[i]) || is_vowel(str[j]) || is_vowel(str[k]) || is_vowel(str[l]) || is_vowel(str[m]) || is_vowel(str[n])) && !(is_vowel(str[i]) && is_vowel(str[j]) && is_vowel(str[k]) && is_vowel(str[l]) && is_vowel(str[m]) && is_vowel(str[n])))
					printf("%c%c%c%c%c%c \t",str[i],str[j],str[k],str[l],str[m],str[n]);
				}
			}
		}	
	}
printf("\n\n");
}


//for 7 alphabet words
printf("\n\n7 ALPHABET WORDS ARE:\n");
for(i=0;i<7;i++)
{
for(j=0;j<7;j++)
if(i!=j)
	{
	for(k=0;k<7;k++)
	if(k!=i && k!=j)
		{
		for(l=0;l<7;l++)
		if(l!=i && l!=j && l!=k)
			{
			for(m=0;m<7;m++)
			if(m!=i && m!=j && m!=k && m!=l)
				{
				for(n=0;n<7;n++)
				if(n!=i && n!=j && n!=k && n!=l &&n!=m)
					{
					for(o=0;o<7;o++)
					{
					if((o!=i && o!=j &&o!=k && o!=l && o!=m && o!=n) && (is_vowel(str[i]) || is_vowel(str[j]) || is_vowel(str[k]) || is_vowel(str[l]) || is_vowel(str[m]) || is_vowel(str[n] || is_vowel(str[o]))) && !(is_vowel(str[i]) && is_vowel(str[j]) && is_vowel(str[k]) && is_vowel(str[l]) && is_vowel(str[m]) && is_vowel(str[n]) && is_vowel(str[o])))
						printf("%c%c%c%c%c%c%c \t",str[i],str[j],str[k],str[l],str[m],str[n],str[o]);
					}
					}
				}
			}
		}	
	}
printf("\n\n");
}
printf("\n");
return 0;
}

// is_vowel() returns 1 if char is a vowel   else 0
int is_vowel(char c)
{
if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
return 1;
else return 0;
}

