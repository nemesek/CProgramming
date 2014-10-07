#include <stdio.h>

int main()
{
  int eggs = 1;

  switch(eggs)
  {
    case 0: printf("No cake\n"); break;
    case 1: printf("Cupcake\n"); break;
    default: printf("We got cake\n");
  }
}
