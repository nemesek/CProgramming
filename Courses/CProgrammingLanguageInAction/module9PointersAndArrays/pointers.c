#include <stdio.h>
void MinMax(int* begin, int* end, int** smallest, int** largest)
{
  if(begin == end)
  {
    *smallest = 0;
    *largest = 0;
  }
  else
  {
    *smallest = *largest = begin; // set pointers to first element

    while(++begin != end)
    {
      if(*begin < **smallest)   // is deref begin < double deref smallest?
      {
        *smallest = begin;  // deref smallest to point to begin pointer
      }

      if(*begin > **largest)  // is deref begin > double deref of largest
      {
        *largest = begin; // deref largest to point to begin pointer
      }
    }
  }
}

int main()
{
  // int value = 123;
  //
  // int* p = &value;
  // int** pp = &p;

  int values[] = {5,2,4,3,6};
  int* smallest = 0;
  int* largest = 0;
  int size = sizeof(values)/sizeof(values[0]);
  printf("smallest=%p largest=%p\n", smallest, largest);
  MinMax(values, values + size, &smallest, &largest);
  printf("min=%d max=%d\n", *smallest, *largest);
  printf("smallest=%p largest=%p\n", smallest, largest);
  printf("smallest=%d largest=%d\n", *smallest, *largest);

}
