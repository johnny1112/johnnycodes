#include<stdio.h>
int main()
{
int x,y;
scanf("%d%d",&x,&y);
printf("value %d and %d",x,y);
int z=x*y;
if(z%2==0)
{
printf("it is even %d",z);
}
else
{
printf("it is odd %d",z);
}
return 0;
}
