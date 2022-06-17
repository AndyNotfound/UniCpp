#include <stdio.h>
#include <conio.h>

main(){
	float harga_satuan, jumlah, harga_total;
	
	harga_satuan = 112.50;
	jumlah = 50;
	
	harga_total = harga_satuan * jumlah;
	
	printf("Harga total : %2.2f", harga_total);
	getch();
}
