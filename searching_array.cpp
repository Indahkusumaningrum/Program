#include <iostream>
using namespace std;

int main(){
	int angka[] = {4, 7, 9, 11, 4, 2, 5, 2, 8, 10};
	int panjang = sizeof(angka)/sizeof(*angka);
	int cari, hasil, banyak_data;
	hasil = 0;
	char ulang;
	

do{
	system("CLS");
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


cout << "\n\nApakah anda ingin melakukan searching lagi? (y/n)\n";
cin >> ulang;

system("CLS");

	if(ulang == 'n' || ulang == 'N'){
		
	}cout << "\t\tTERIMA KASIH TELAH MENGGUNAKAN PROGRAM INI";
} while (ulang == 'y' || ulang == 'Y');

return 0;
}
