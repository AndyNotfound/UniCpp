#include <stdio.h>
#include <iostream>
#define N 20

using namespace std;

int main(){
    string namaPenyewa[N], judulFilm[N], bonus[N], jenisFilm[N], kodeFilm;
    int lamaSewa[N], hargaSewa[N], totalBayar[N], totalSeluruhnya, pajak, bersihBayar, kembalian, uangPembeli;
    char ulang;
    int i = 0;

    while (true){
        
        system("clear");

        cout << "Nama Penyewa : "; cin>>namaPenyewa[i];
        cout << "Judul Film : "; cin >> judulFilm[i];

        cout << "Kode Film (A/D/K) : "; cin >> kodeFilm;
        if (kodeFilm == "A" || kodeFilm == "a"){
            jenisFilm[i] = "Action";
            hargaSewa[i] = 5000;
        } else if (kodeFilm == "D" || kodeFilm == "d"){
            jenisFilm[i] = "Drama";
            hargaSewa[i] = 4000;
        } else if (kodeFilm == "K" || kodeFilm == "k"){
            jenisFilm[i] = "Komedi";
            hargaSewa[i] = 3000;
        } else {
            cout << "\nOpsi yang Anda pilih tidak valid!";
        }
        
        cout << "Lama Sewa : "; cin >> lamaSewa[i];
        if (lamaSewa[i] < 3){
            bonus[i] = "Tidak Ada!";
        } else if (lamaSewa[i] >= 5){
            bonus[i] = "Gelas";
        } else if (lamaSewa[i] >= 3){
            bonus[i] = "Sticker";
        }
        
        totalBayar[i] = hargaSewa[i]*lamaSewa[i];
        
        i++;
        
        cout << "Ada Data Lagi (Y/N) ? "; cin >> ulang;
        if (ulang == 'N' || ulang == 'n'){
            break;
        }

    }

    system("clear");

    cout<<"Nama penyewa\tJudul film\tJenis film\tHarga sewa\tLama sewa\tTotal bayar\tBonus\n"<<endl;
   
    for (int j = 0; j < i; j++){
        cout << namaPenyewa[j] << "\t\t" << judulFilm[j] << "\t\t" << jenisFilm[j] << "\t\t" << hargaSewa[j] << "\t\t" << lamaSewa[j] << "\t\t" << totalBayar[j] << "\t\t" << bonus[j] << "\n\n" << endl;
        totalSeluruhnya+=totalBayar[j];
    }

    pajak = 0.1 * totalSeluruhnya;
    
    bersihBayar = totalSeluruhnya - pajak;

    cout << "Total seluruhnya\t\t\t\t\t\t\t\t: " << totalSeluruhnya << endl;
    cout << "Pajak           \t\t\t\t\t\t\t\t: " << pajak << endl;
    cout << "Total yang harus dibayar\t\t\t\t\t\t\t: "<< bersihBayar << endl;
    cout << "Bayar           \t\t\t\t\t\t\t\t: "; cin >> uangPembeli;

    kembalian = uangPembeli - bersihBayar;
    cout << "\n\nKembalian       \t\t\t\t\t\t\t\t: " << kembalian << endl;
}
