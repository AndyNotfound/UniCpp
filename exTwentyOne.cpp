#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main(int argc, char * argv[]) {
  char nim[N][8];
  char nama[N][20];
  char nilai[N][3];
  float nil[N];
  char status[N], lagi;
  int jml = 0, lulus = 0, i = 0;
  float persen;

  cout << "Program Menentukan Status Nilai Mahasiswa";
  cout << endl;

  while (1) {
    cout << "NIM : ";
    gets(nim[i]);
    cout << "Nama : ";
    gets(nama[i]);
    cout << "Nilai : ";
    gets(nilai[i]);
    nil[i] = atof(nilai[i]);
    jml++;
    if (nil[i] < 60)
      status[i] = 'G';
    else {
      status[i] = 'L';
      lulus++;
    }
    i++;
    cout << "Ada data lagi [Y/T] : ";
    lagi = getche();
    if (lagi == 't' || lagi == 'T')
      break;
    cout << endl;
  }

  persen = ((float) lulus / jml) * 100;
  //Cetak output
  //clrscr();
  cout << endl;
  cout << "========================================================" <<endl;
  cout << "Nama \t\tNIM \t\tNilai \t\tStatus" << endl;
  cout << "========================================================" <<endl;
  for (i = 0; i < jml; ++i) {
    cout << nama[i] << "\t\t";
    cout << nim[i] << "\t\t";
    cout << nilai[i] << "\t\t";
    cout << status[i] << endl;
  }
  cout << "========================================================" <<endl;
  cout << endl << endl;
  cout << "\tJumlah Mahasiswa : " << jml << endl;
  cout << "\tJumlah Lulus : " << lulus << endl;
  cout << "\tPersentase Kelulusan : " << persen;
  getch();
}
