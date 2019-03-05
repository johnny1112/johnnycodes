#include<stdio.h>
#include<string.h>
int main(void)
{
char x[10];
int y,i;
scanf("%s",x);
n=strlen(x);
for(i=0;i<n;i=i+2)
{
printf("%c",x[i]);
}
for(i=1;i<n;i=i+2)
{
printf("%c",x[i]);
}
return 0;}
