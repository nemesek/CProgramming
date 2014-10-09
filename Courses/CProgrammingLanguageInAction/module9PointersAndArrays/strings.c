#include <stdio.h>

int StringLength(char* string)
{
  int length = 0;

  while(*string++)
  {
    ++length;
  }

  return length;
}

int main()
{
  // c style string
  char* string = "Hello world";

  // not much different than char array
  char string2[] = "Hello world";

  printf("size %d\n", (int) sizeof(string2));

  // manually scan to find length
  int length = 0;

  for(char* p = string; *p != 0; ++p)
  {
    ++length;
  }

  printf("length %d\n", length);

  int length2 = StringLength(string);
  printf("length2 %d\n", length2);

}
