#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;
int main(int argc, char * argv[]) {

  int nilai_siswa[20];

  for (int i = 1; i <= 5; i++) {
    cout << "Masukan Nilai Siswa Ke " << i << " = ";
    cin >> nilai_siswa[i];
  }
  cout << endl;

  for (int i = 1; i <= 5; i++)
    cout << "Nilai Siswa Ke " << i << " = " << nilai_siswa[i] << endl;
  //Only work on windows because getch() is a function from <conio.h>, I didn't find the equivalent of that from <stdio.h>
  getch();
}
