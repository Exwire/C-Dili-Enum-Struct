#include <stdio.h>
#include <stdlib.h>

struct yap1 {
  char cdizi[20];
  int id;
} yd1;

struct yap2 {
  char cdizi[20];
  int id;
};

struct {
  char cdizi[20];
  int id;
} yd3;

struct yap2 yd2;

char* bg_fgets(char *str, int count);

int main(void)
{
  char cdizi[20];

  printf("Bir karakter dizisi giriniz: ");
  bg_fgets(yd1.cdizi, 20);
  printf("int bir deðer giriniz: ");
  bg_fgets(cdizi, 20);
  yd1.id = (int) atoi(cdizi);

  printf("\nBir karakter dizisi giriniz: ");
  bg_fgets(yd2.cdizi, 20);
  printf("int bir deðer giriniz: ");
  bg_fgets(cdizi, 20);
  yd2.id = (int) atoi(cdizi);

  printf("\nBir karakter dizisi giriniz: ");
  bg_fgets(yd3.cdizi, 20);
  printf("int bir deðer giriniz: ");
  bg_fgets(cdizi, 20);
  yd3.id = (int) atoi(cdizi);

  printf("%s %d\n", yd1.cdizi, yd1.id);
  printf("%s %d\n", yd2.cdizi, yd2.id);
  printf("%s %d", yd3.cdizi, yd3.id);

  return 0;
}

char* bg_fgets(char *str, int count)
{
  const char *s;

  fgets(str, count, stdin);

  for (s=str; *s && *s!='\n'; ++s);

  if ((s-str) < (count-1)) *(str+(s-str)) = '\0';

  return str;
}
