#include <conio.h>
#include <stdio.h>

int main() {
  float angka;
  char huruf;
  printf("Masukan Nilai Angka (1-100) = ");
  scanf("%f", & angka);
  if (angka < 50) huruf = 'E';
  else if (angka >= 50 && angka < 60) huruf = 'D';
  else if (angka >= 60 && angka < 70) huruf = 'C';
  else if (angka >= 70 && angka < 85) huruf = 'B';
  else huruf = 'A';
  printf("Nilai Huruf   : %c", huruf);
  getch();
}