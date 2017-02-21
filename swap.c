#include <stdio.h>

void swap(int a, int b);
//int a,b;
void main()
{
    int a=20;
    int b=40;
  printf("The value of a=%d \n and b=%d",a,b);
  swap(a,b);
}

void swap(int a, int b)
{
  int c;
  c=a;
  a=b;
  b=c;

  printf("\nAfter the swap...");
  printf("\nthe value of a=%d \n  and b=%d",a,b);
}
