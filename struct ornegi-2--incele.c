#include <stdio.h>

int main(void)
{
  struct yap {
    int id;
    char cd;
  } yd;

  int id = 21;

  yd.id = 192;
  yd.cd = 'A';

  printf("main() fonksiyonu id de�i�ken de�eri: %d\n", id);

  printf("yap adl� yap� i�indeki id de�i�ken de�eri: %d\n", yd.id);
  printf("yap adl� yap� i�indeki cd de�i�ken de�eri: %c", yd.cd);

  return 0;
}

