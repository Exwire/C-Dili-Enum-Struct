#include <stdio.h>

struct yap {
  char cdizi1[20]; // Ad�
  char cdizi2[20]; // Soyad�
  char cdizi3[20]; // Memleketi
  char cdizi4[20]; // Tahsili
  int id;          // Ya��
} ydizi[4] = { "Ahmet", "Efendi", "Rize", "Lise", 25,
               "Mehmet", "Sakin", "Kars", "Ortaokul", 36,
               "Mustafa", "Kibar", "Ni�de", "Lise", 42,
               "Murat", "Sade", "Sinop", "�niversite", 28
             };

int main(void)
{
  int id;

  for (id=0; id<4; id++)
       printf("%-20s %-20s %-20s %-20s %-d\n", 
       ydizi[id].cdizi1, ydizi[id].cdizi2, ydizi[id].cdizi3, 
       ydizi[id].cdizi4, ydizi[id].id);  

  return 0;
}
