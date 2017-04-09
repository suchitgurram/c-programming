#include<stdio.h>
int main()
{
  int age;
  printf("Enter your age : \n");
  scanf("%d", &age);
  if (age > 18)
    printf("The age is greater than 18 \n");
  if (age == 18)
  printf("The age is equal to 18 \n");
  if (age < 18)
    printf("The age is less than 18");
  return 0;
}
