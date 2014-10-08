#include <stdio.h>

int main()
{
  int fiveNinths = 5/9;
  int nineFifths = 9/5;

  double better1 = 5.0/9.0;
  double better2 = 9.0/5.0;

  auto mixed = 9/5.0; // pretty much useless keyword in c
  double mixed2 = 9/5.0;


  printf("%d %d\n", fiveNinths, nineFifths);
  printf("%.2f %.2f\n", better1, better2);
  printf("%.2f\n", mixed);
  printf("%.2f\n", mixed2);

}
