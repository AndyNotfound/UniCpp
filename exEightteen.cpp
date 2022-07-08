#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<string.h>

using namespace std;

int main(int argc, char *argv[]){
	
	char nama[20],hadiah[20];
	float pembelian,diskon,jml_bayar;
	
	cout<<"Nama Pembeli 			: ";
	gets(nama);
	cout<<"Pembelian 			: ";
	cin>>pembelian;
	cout<<endl<<endl;
	
	if(pembelian > 500000)
		diskon=0.2*pembelian;
	else if(pembelian > 300000)
		diskon=0.15*pembelian;
	else if(pembelian > 100000)
		diskon=0.10*pembelian;
	else 
		diskon=0;
	
	jml_bayar = pembelian - diskon;
	
	if(jml_bayar > 500000)
		strcpy(hadiah,"Payung");
	else if(jml_bayar >300000)
		strcpy(hadiah,"Topi");
	else if(jml_bayar >100000)
		strcpy(hadiah,"Gelas Cantik");
	else
		strcpy(hadiah,"Tidak Ada");
		
	cout<<"Jumlah diskon			: "<<diskon<<endl;
	cout<<"Jumlah Bayar			: "<<jml_bayar<<endl;
	cout<<"Hadiah				: "<<hadiah<<endl;
	cout<< "Nama				: "<<nama<<endl;
	getch();
	
}
