#include <stdio.h>

int Dozens(int eggs) {return eggs/12;}

int main()
{
  int dozens = Dozens(48);
  int eggs = dozens * 12;

  if(dozens)  // evaluates to false if 0
  {
    printf("dozens %d\n", dozens);
    int before = eggs++;
    int after = ++eggs;

    printf("before = %d after = %d\n", before, after);
  }
}
