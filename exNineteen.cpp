#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <cctype>
#include<iostream>

using namespace std;
int main(int argc, char * argcv[]) {
  //clrscr();
  char nama[20], jurusan[20], jenis[20], bonus[40];
  float jlh_tiket, harga_tiket, diskon, jlh_bayar;
  cout << "Nama Pembeli : ";
  gets(nama);
  cout << "Jurusan : ";
  gets(jurusan);
  cout << "Jenis Bus : ";
  gets(jenis);
  cout << "Jumlah Tiket : ";
  cin >> jlh_tiket;
  cout << endl << endl;
  
  
  if (strcmp(jurusan, "Bandung") == 0) {
    if (strcmp(jenis, "Non AC") == 0) {
      harga_tiket = 90000;
      strcpy(bonus, "Tidak Ada");
    } else if (strcmp(jenis, "AC") == 0) {
      harga_tiket = 150000;
      strcpy(bonus, "2x Snack Box");
    } else {
      harga_tiket = 225000;
      strcpy(bonus, "2x Snack Box + 4Makan");
    }
  } else {
    if (strcmp(jenis, "Non AC") == 0) {
      harga_tiket = 70000;
      strcpy(bonus, "Tidak Ada");
    } else if (strcmp(jenis, "AC") == 0) {
      harga_tiket = 120000;
      strcpy(bonus, "1x Snack Box");
    } else {
      harga_tiket = 200000;
      strcpy(bonus, "1x Snack Box + 2x Makan");
    }
  }
  
  if (jlh_tiket > 3) {
    diskon = 0.15 * harga_tiket;
  } else {
    diskon = 0;
  }
  
  jlh_bayar = jlh_tiket * harga_tiket - (diskon * jlh_tiket);
  cout << "Harga Tiket : " << harga_tiket << endl;
  cout << "Bonus : " << bonus << endl;
  cout << "Diskon : " << diskon << endl;
  cout << "Jumlah Bayar : " << jlh_bayar;
  getch();
}
