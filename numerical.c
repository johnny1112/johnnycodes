#include <stdio.h>
#include<string.h>
int main()
{
char x[20],y[80];
int i,z;
printf("value");
scanf("%s",&x);
for(i=0;x[i]!='\0';i++)
{
if(isdigit(x[i]))
{
y[z]=x[i];
z++;         
}}
printf("output",y);
return 0;
}
