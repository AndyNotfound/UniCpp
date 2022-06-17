#include <stdio.h>
#include <conio.h>

main (){
	printf("Program untuk menghitung umur seseorang\n");
	printf("---------------------------------------\n");
	
	int th_lahir, th_sekarang;
	
	printf("Masukkan tahun lahir Anda\t: ");
	scanf("%d", &th_lahir);
	
	printf("Masukkan tahun saat ini\t        : ");
	scanf("%d", &th_sekarang);
	
	int umur = th_sekarang - th_lahir;
	
	printf("Umur Anda sekarang\t        : %i tahun\n", umur);
	getch ();
}
