#include <stdio.h>

int main()
{
  int count = 0;

  while (count < 10)
  {
        printf("count %d\n", count);
        count += 1;
  }

  int countAgain = 0;
  do
  {
    printf("count again %d\n", countAgain);
  }
  while(countAgain > 0);
}
