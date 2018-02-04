#include<stdio.h>
#include<conio.h>
int main()
{
int year;
clrscr();
scanf("%d",&year);
if(year%4==0)
printf("YES");
else
printf("NO");
return 0;
}