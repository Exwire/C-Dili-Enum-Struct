#include<stdio.h>

int main( void )
{
	struct {
		char isim[40];
		int boy;
		struct {
			int yil;
			int ay;
			int gun;
		} dogum_bilgileri;
	} kisi;

	printf( "Ad�n�z: " );
	scanf( "%s", kisi.isim );
	printf( "Boyunuz: " );
	scanf( "%d", &kisi.boy );
	printf( "Do�um tarihi: ");
	scanf( "%d-%d-%d", 	&kisi.dogum_bilgileri.gun,
				&kisi.dogum_bilgileri.ay,
				&kisi.dogum_bilgileri.yil );

	printf( "Girilen bilgiler:\n" );
	printf( "�sim: %s\n", kisi.isim );
	printf( "Boy: %d\n", kisi.boy );
	printf( "Do�um tarihi: %d/%d/%d\n", 	kisi.dogum_bilgileri.gun,
						kisi.dogum_bilgileri.ay,
						kisi.dogum_bilgileri.yil );
	return 0;
}
