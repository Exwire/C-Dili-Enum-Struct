#include <stdio.h>

struct yap {
  char cdizi1[20]; // Adý
  char cdizi2[20]; // Soyadý
  char cdizi3[20]; // Memleketi
  char cdizi4[20]; // Tahsili
  int id;          // Yaþý
} yd = { "Murat", "Kalender", "Ankara", "Lise", 21 };

int main(void)
{
  printf("%s %s %s %s %d", yd.cdizi1, yd.cdizi2, yd.cdizi3, yd.cdizi4, yd.id);

  return 0;
}
