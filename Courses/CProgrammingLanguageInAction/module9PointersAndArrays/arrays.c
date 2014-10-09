#include <stdio.h>

// when passing array to function we need to pass a pointer
int* Print(int* begin, int* end)
{
  if(begin == end) return 0;
  int* largest = begin;
  for(; begin != end; ++begin)
  {
    printf("%d\n", *begin);
    if(*largest < begin)
      {
        largest = begin;
      }
  }

  return largest;


}

int main()
{
  int numbers[3] = {101, 202, 303 };
  int size = sizeof(numbers)/sizeof(numbers[0]);

  for(int i = 0; i < size; i++)
  {
    printf("%d\n", numbers[i]);
  }

  int* p = numbers;
  int* end = p + size;  // increments by num elements -- points to end of array
  for(; p != end; ++p)
  {
    printf("%d\n", *p);
  }

  printf("sizeof(numbers) %d\nsizeof(p) %d\n", (int)sizeof(numbers), (int)sizeof(p));

  int* largest = Print(numbers, numbers + size);

  if(largest)
    {
      printf("largest %d\n", *largest);
    }
}
