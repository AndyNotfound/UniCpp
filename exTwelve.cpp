#include <stdio.h>
#include <conio.h>

int main() {
    float pendapatan, jasa = 0, komisi = 0, total;
    printf("\nPendapatan Hari ini : ");
    scanf("%f", & pendapatan);
    if (pendapatan >= 0 && pendapatan <= 200000) {
      jasa = 10000;
      komisi = 0.1 * pendapatan;
    } else {
      if (pendapatan > 200000 && pendapatan <= 300000) {
        jasa = 20000;
        komisi = 0.15 * pendapatan;
        }
        else {
          jasa = 30000;
          komisi = 0.2 * pendapatan;
        }
    }
    total = pendapatan + komisi + jasa;
    printf("\nUang Jasa   : %10.2f", jasa);
    printf("\nKomisi      : %10.2f", komisi);
    printf("\n========================= +");
    printf("\nHasil total : %10.2f", total);
    getch();
}