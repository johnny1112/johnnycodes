include<stdio.h>
int main()
{
 int x=90,y=12;
 printf("x=%d,y=%d",swapping x,y);
 scanf("%d %d",&x,&y);
 x=x^y;
 y=x^y;
 x=x^y;
 printf("x=%d,y=%d",swapping x,y);
 return 0;
 }   
