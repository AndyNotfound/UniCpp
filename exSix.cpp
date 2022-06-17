#include <stdio.h>
#include <conio.h>

main (){
	int jam, menit, hasil;
	
	printf("\n\xDB\xDB\xDB Program Konversi Jam \xDB\xDB\xDB");
	printf("\n\nInputkan Jam dan Menit (Jam:Menit) : ");
	scanf("%d", &jam, &menit);
	
	hasil = jam * 60 + menit;
	printf("\n\n%d Jam %d Menit = %d menit", jam, menit, hasil);
	getch ();
}
