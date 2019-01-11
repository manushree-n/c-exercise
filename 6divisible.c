
#include "conio.h"
#include "stdio.h"
 
void main()
{
  int num;
  printf("\nEnter a number ");
  scanf("%d",&num);
  if(num%1==0)
  {
    if(num%11==0)
    {
      printf("\nThe number %d is divisible by 1 and 11");
    }
    else
    {
      printf("\nThe number %d is divisible by 1 but not by 11");
    }
  }
  else
  {
    printf("\nThe number %d is niether divisible by 1 nor by 11");
  }

}

