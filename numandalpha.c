#include<stdio.h>
int main()
{
 char str[50]="nihasshruthi75";
 int i;
 for(i=0;str[i]='\0';i++)
 {
  if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>=0&&str[i]<=9))
  {
    printf("it contains");
    }
    }
    return 0;
    }
