#include<stdio.h>
#include<string.h>
int main( void )
{
	// sahis_bilgileri, yapimizin
	// etiketidir.
	struct sahis_bilgileri {
		char isim[40];
		int boy;
	};

	// Yapidan iki adet degisken
	// tanimliyoruz.
	struct sahis_bilgileri kisi_1;
	struct sahis_bilgileri kisi_2;

	// Birinci sahsin bilgilerini
	// kaydediyoruz.
	strcpy( kisi_1.isim, "AHMET" );
	kisi_1.boy = 170;

	// Ikinci sahsin bilgilerini
	// kaydediyoruz.
	strcpy( kisi_2.isim, "MEHMET" );
	kisi_2.boy = 176;

	return 0;
}
