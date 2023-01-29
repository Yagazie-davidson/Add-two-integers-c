#include<stdio.h>

int main(void) 
{
  int interger1;
  int interger2;
  printf("Enter first number\n");
  scanf("%d", &interger1);
  printf("Enter second number\n");
  scanf("%d", &interger2);
  int sum;

  sum = interger1 + interger2;
  printf("The sum is %d", sum);
}
