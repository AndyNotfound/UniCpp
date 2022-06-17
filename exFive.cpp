#include <stdio.h>
#include <conio.h>

main (){
	float jari, luas, kel;
	const float PI = 3.141592;
	
	printf("\xB2 PROGRAM KELILING DAN LUAS LINGKARAN \xB2");
	
	printf("\n Jari-jari lingkaran : ");
	scanf("%f", &jari);
	
	kel = PI*2*jari;
	luas = PI*jari*jari;
	
	printf("\nKeliling : %f", kel);
	printf("\nLuas     : %f", luas);
	getch ();
}
