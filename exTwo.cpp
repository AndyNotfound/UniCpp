#include <stdio.h>
#include <conio.h>

const float PE= 3.14;

main (){
//	clrsrc();
	printf("Program penghitungan luas lingkaran\n");
	printf("-----------------------------------\n");
	
	float jari2, luas;
	
	printf("Masukkan panjang jari jari: ");
	scanf("%f", &jari2);
	
	luas = PE * jari2 * jari2;
	printf("Luas lingkaran dengan jari jari %g = %g\n", jari2, luas);
	getch();
}
