#include<stdio.h>
int main()
{
int n,r=0,reminder;
printf("value");
scanf("%d",&n);
while(n!=0)
{
reminder=n%10;
r=r*10+reminder;
n=n/10;
}
printf("output",r);
}
