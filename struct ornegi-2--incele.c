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

  printf("main() fonksiyonu id deðiþken deðeri: %d\n", id);

  printf("yap adlý yapý içindeki id deðiþken deðeri: %d\n", yd.id);
  printf("yap adlý yapý içindeki cd deðiþken deðeri: %c", yd.cd);

  return 0;
}

