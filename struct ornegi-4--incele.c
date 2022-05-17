#include <stdio.h>
#include <stdlib.h>

struct yap {
  char cdizi1[20]; // Ýsim
  char cdizi2[20]; // Soyadý
  int id;          // Yaþý
} ydizi[5];

char* bg_fgets(char *str, int count);

int main(void)
{
  int id;
  char cdizi[20];

  for (id=0; id<5; id++) {
       printf("Adý: ");
       bg_fgets(ydizi[id].cdizi1, 20);
       printf("Soyadý: ");
       bg_fgets(ydizi[id].cdizi2, 20);
       printf("Yaþý: ");
       bg_fgets(cdizi, 20);
       ydizi[id].id = (int) atoi(cdizi);

       printf("\n");
  }

  for (id=0; id<5; id++) {
       printf("%s %s %d\n", ydizi[id].cdizi1, ydizi[id].cdizi2, ydizi[id].id);
  }

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
