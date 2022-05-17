#include <stdio.h>

struct yap {
  int id;
  char cd;
} yd;

struct yap fonk(void);

int main(void)
{
  yd = fonk();

  printf("%d %c", yd.id, yd.cd);

  return 0;
}

struct yap fonk(void)
{
  struct yap yd;

  yd.id = 21;
  yd.cd = 'A';

  return yd;
}

