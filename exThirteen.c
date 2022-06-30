#include <conio.h>
#include <stdio.h>

int main() {
  int bil;
  printf("Ketikan Sebuah Bilangan Bulat Antara (1 s/d 5) = ");
  scanf("%d", & bil);
  switch (bil) {
  case 1:
    printf("Anda Mengetikan Angka Satu");
    break;
  case 2:
    printf("Anda Mengetikan Angka Dua");
    break;
  case 3:
    printf("Anda Mengetikan Angka Tiga");
    break;
  case 4:
    printf("Anda Mengetikan Angka Empat");
    break;
  case 5:
    printf("Anda Mengetikan Angka Lima");
    break;
  default:
    printf("Anda Mengetikan Angka Yang Salah");
    break;
  }
  getch();
}