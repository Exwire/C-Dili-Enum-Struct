#include<stdio.h>
int main( void )
{
	// kisi adinda bir yapi olusturulup
	// baslangic degerleri 'Ali' ve '167'
	// olacak sekilde atanir.
	struct {
		char isim[40];
		int boy;
	} kisi = { "Ali", 167 };

	return 0;
}
