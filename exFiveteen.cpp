#include <conio.h>
#include <stdio.h>
#include <ctype.h>

int main() {
  char kaya;
  printf("Apakah Saya Termasuk Orang Kaya (Y/T) = ");
  scanf("%c", & kaya);
  if (tolower(kaya) == 'y') {
    printf("\nSaya akan sering pergi ke Hawaii");
    printf("\nDan makan makanan yang mahal-mahal");
    printf("\nSerta bersenang senang di Las Vegas");
  } else {
    printf("\nHiburan Saya Hanya Acara TV");
    printf("\nDan makanan saya hanya itu-itu saja");
  }
  getch();
}