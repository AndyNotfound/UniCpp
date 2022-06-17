#include <stdio.h>
#include <conio.h>

main (){
	printf("Program untuk menghitung umur seseorang\n");
	printf("---------------------------------------\n");
	
	int thn_lahir, thn_sekarang;
	
	printf("Masukkan tahun lahir Anda\t: ");
	scanf("%i", &thn_lahir);
	
	printf("Masukkan tahun saat ini\t        : ");
	scanf("%i", &thn_sekarang);
	
	int umur = thn_sekarang - thn_lahir;
	
	printf("Umur Anda sekarang\t        : %i tahun\n", umur);
	getch();
}
