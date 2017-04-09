#include<stdio.h>
int main()
{
  int age;
  printf("please enter age : \n");
  scanf("%d", &age);
  if (age > 18)
    {
      printf("The age is greater than 18 \n");
    }
  else
    {
      printf("The age is not greater than 18 \n");
    }
  return 0;
}
