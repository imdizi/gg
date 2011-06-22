#include <stdio.h>

int print_7_n(int n)
{
  printf("7 * %d = %d\n",n, 7 * n);
}

int main()
{
  int i;
  for(i=1; i<10; i++)
    print_7_n(i);
  return 0;
}
