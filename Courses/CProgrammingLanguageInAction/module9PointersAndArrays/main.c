#include <stdio.h>

int main()
{
  int i = 1234;

  printf("0x%p\n", &i);

  int* p = 0;
  p = &i;
  int j = *p;
  printf("%d\n", j);
  *p = 2345;
  printf("i = %d j = %d\n", i,j);

}
