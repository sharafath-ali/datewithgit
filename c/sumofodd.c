#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i,limit,sum=0;
  printf("enter a limit");
  scanf("%d",&limit);

  for(i=1;i<=limit;i++)
  {
    if(i%2==1)
    {
     sum=sum+i;
    }
  }
  printf("%d \n",sum );
}
