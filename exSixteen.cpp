#include<stdio.h>
#include<conio.h>
#include<iostream>
#include <string>

using namespace std;

// pointer //
int main(int argc,char *argv[]){
	char nama[20];
	
	float jumlahJamKerja,jamLembur,jamKerja,totalGaji;
	cout<<"Nama Karyawan			: ";
	gets(nama);
	cout<<"Jumlah jam kerja		: ";
	cin>>jumlahJamKerja;
	
	std::string output = std::string("\nTotal gaji ") + 
						 std::string(nama) +
						 std::string(" Selama seminggu : ");
						 
	if(jumlahJamKerja > 48){
		jamLembur= jumlahJamKerja - 48;
		jamKerja = 48;
	} else{
		jamLembur = 0;
		jamKerja = jumlahJamKerja;
	}
	
	totalGaji = (jamLembur * 5000) + (jamKerja * 4000);
	std::cout<< output << totalGaji << std::endl;
	getch();
}
