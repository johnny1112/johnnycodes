#include <stdio.h>
int main() 
{	
int num1,num2;
char x;
scanf("%d %c %d",&num1,&x,&num2);
if(x=='/'){
printf("%d",(num1/num2));}
else
{
printf("%d",(num1%num2));}
}
