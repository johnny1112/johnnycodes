#include <stdio.h>
int main(void) {
int num,even;
printf("enter digit:");
scanf("%d",&dig);
if(dig%2==0)
{
even=dig-2;	
}
else
{
even=dig-1;
}
printf("%d",&even);
return 0;
