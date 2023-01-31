//Indah Kusuma Ningrum [31/01/2023, 22.23]
#include <iostream>
#include <conio.h>
using namespace std;

int angka[] = {4, 7, 9, 11, 4, 2, 5, 2, 8, 10};
	int panjang = sizeof(angka)/sizeof(*angka);
	int cari, hasil = 0, banyak_data;
	char ulang;

void program (){

	cout << "--------------------\n";
	cout << "Data tersedia : \n";
	cout << "--------------------\n";	

	for(int i = 0; i < panjang; i++){
		
		cout << "Indeks ke-" << i << " : " << angka[i] << endl;
	}

cout << "Masukkan data yang dicari : ";
cin >> cari;

for (int i = 0; i < panjang; i++){
	if(cari == angka[i]){
		hasil++;
	}
}

	if (hasil == 0){
	cout << "DATA TIDAK DITEMUKAN" << endl;
	}else{
		cout << "Data " << cari << " ditemukan di : ";
		for (int i = 0; i < panjang; i++){
			if(cari == angka[i]){
			cout << "\nIndeks ke-" << i << endl;
			}
		}
	}
	
}
int main(){

	program();
	
ulang:	
cout << "\n\nApakah anda ingin melakukan searching lagi? (y/n)\n";
cin >> ulang;

system("CLS");
	
	if (ulang == 'y' || ulang == 'Y'){
		program();
	}else if(ulang == 'n' || ulang == 'N'){
		cout << "\t\tTERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI";		
	} else {
		cout << "INPUTAN ANDA TIDAK SESUAI!!!\n";
		cout << "Tekan Enter untuk menjawab ulang";
		_getch();
		goto ulang;
	}

return 0;
}
