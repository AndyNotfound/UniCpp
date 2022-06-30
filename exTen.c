#include <stdio.h>
#include <conio.h>

int main() {
  int usia;
  printf("\nBerapakah Usia Anda   ? ");
  scanf("%d", & usia);
  if (usia >= 40) {
    printf("\nWah.. Anda Sudah Cukup Tua");
    printf("\nJangan Makan makanan yang Banyak Mengandung Kolesterol");
    printf("\nTidak Baik Untuk Kesehatan Anda");
  }
  getch();
}