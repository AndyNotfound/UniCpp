#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#define N 20

using namespace std;

int main (int argc, char *argv[]){
	char nama[N][20];
	string kode[N];
	int upahJam[N], lamaKerja[N], totalUpah[N], jamLembur[N], upahLembur[N], pph[N], upahBersih[N], totalSeluruhnya;
	char ulang;
	int i = 0;
	
	while(true){
		cout<<"\nNama : ";
		cin>>nama[i];
		
		cout<<"Kode pendidikan (SD/SMP/SMA/SMK) : ";
		cin>>kode[i];
		
		if (kode[i] == "SD" || kode[i] == "sd"){
			upahJam[i] = 10000;
		} else if (kode[i] == "SMP" || kode[i] == "smp"){
			upahJam[i] = 15000;
		} else if (kode[i] == "SMA" || kode[i] == "sma"){
			upahJam[i] = 20000;
		} else if (kode[i] == "SMK" || kode[i] == "smk"){
			upahJam[i] = 22000;
		}
		cout<<"Lama kerja : ";
		cin>>lamaKerja[i];
		
		totalUpah[i] = upahJam[i] * lamaKerja[i];
		
		cout<<"Jam lembur : ";
		cin>>jamLembur[i];
		
		upahLembur[i] = jamLembur[i] * 5000;
		
		pph[i] = 0.1*totalUpah[i];
		
		upahBersih[i] = totalUpah[i] + upahLembur[i] - pph[i];
		
		cin.ignore();
		
		cout<<"\n\nMasih ada data lagi? ";
		ulang = getche();
		
		i++;
		
		if(ulang == 'N' || ulang == 'n'){
			break;
		}
	}
	
	cout<<"\n\nNama\tKode Pendidikan\tUpah Perjam\tLama Kerja\tTotal Upah\tJam Lembur\tUpah Lembur\tPPh\tUpah Bersih"<<endl;
	for (int j = 0; j < i; j++){
		cout<<nama[j]<<"\t";
		cout<<kode[j]<<"\t\t";
		cout<<upahJam[j]<<"\t\t";
		cout<<lamaKerja[j]<<"\t\t";
		cout<<totalUpah[j]<<"\t\t";
		cout<<jamLembur[j]<<"\t\t";
		cout<<upahLembur[j]<<"\t\t";
		cout<<pph[j]<<"\t\t";
		cout<<upahBersih[j]<<"\t\n";
		totalSeluruhnya += upahBersih[j];
	}
	cout<< "\n\nTotal seluruhnya : \t\t\t\t\t\t\t\t\t\t\t\t"<<totalSeluruhnya<<endl;
}
