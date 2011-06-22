#include <stdio.h>

int print_7_n(int n)
{
  printf("7 * %d = %d\n",n, 7 * n);
}

int main()
{
  int n;
  scanf("%d", &n);
  print_7_n(n);
  return 0;
}

