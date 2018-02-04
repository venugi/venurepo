#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
char in;
int i,flag=0;
char a[10]={'a','e','i','o','u','A','E','I','O','U'};
clrscr();
scanf("%c",&in);
for(i=0;a[i]!='\0';i++)
{
if(in==a[i])
{
printf("VOWEL");
flag=1;
break;
}
}
if(flag==0)
printf("CONSONENT");
return 0;
}

