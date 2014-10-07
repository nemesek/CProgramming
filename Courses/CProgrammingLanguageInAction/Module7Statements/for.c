#include <stdio.h>

int main()
{
  for(int count = 0; count < 10; count++)
    {
        printf("count: %d \n", count);
    }

    // ugly
    int c = 0;

    for(;;)
      {
        printf("count again: %d\n", c);
        c += 1;

        if(c == 10) break;
      }
}
