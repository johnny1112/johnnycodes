#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{
int i,flag;
char x[100];
printf("value:");
scanf("%s",x);
for(i=0;i<strlen(x);i++)
{
x[i]=tolower(x[i]);
}
for(i=0;i<strlen(x);i++)
{
if(x[i]==x[i+1])
{
flag=1;
break;
}
}
if(flag==1)
printf("no");
else
printf("yes");
return 0;
}
