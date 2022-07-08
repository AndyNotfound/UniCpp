#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;

int main(int argc, char *argv[]){
	char name[20], golongan;
	float jumlahJamKerja, jumlahLembur, jamKerja, upahLembur, upahKerja, gajiPokok, gajiPerJam, totalGaji;
	
	cout<<"Nama Karyawan			: ";
	gets(name);
	cout<<"Golongan Karyawan		: ";
	golongan = getche();
	cout<<endl;
	cout<<"Jumlah jam kerja		: ";
	cin>>jumlahJamKerja;
	cout<<endl;
	
	//golongan
	if(golongan == 'a' || golongan =='A'){
		gajiPokok=50000;
		gajiPerJam=4000;
	}
	else if(golongan == 'b' || golongan == 'B'){
		gajiPokok=75000;
		gajiPerJam=5000;
	}
	else if(golongan == 'c' || golongan =='C'){
		gajiPokok=90000;
		gajiPerJam=6000;
	}
	else{
		gajiPokok=100000;
		gajiPerJam=7000;
	}
	
	//jumlahJamKerja
	if(jumlahJamKerja > 100){
		jumlahLembur= jumlahJamKerja - 100;
		jamKerja=100;
	}
	else{
		jumlahLembur=0;
		jamKerja= jumlahJamKerja;
	}
	
	upahLembur=jumlahLembur*7500;
	upahKerja=jamKerja*gajiPerJam;
	totalGaji=gajiPokok+upahLembur+upahKerja;
	cout<<"Gaji Pokok 			: "<<gajiPokok<<endl;
	cout<<"Gaji/Jam			: "<<gajiPerJam<<endl;
	cout<<"Total Gaji Selama Sebulan	: "<<totalGaji<<endl;
	getch();
	
	
}
