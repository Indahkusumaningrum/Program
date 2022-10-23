//Program ini dibuat oleh Indah Kusuma Ningrum
//Pada tanggal 8 Oktober untuk memenuhi tugas post test 5 DDP

#include <iostream>
using namespace  std;

int main(){
	
	//-----Deklarasi Variabel-----
	int baris,  kolom;
	int matriks[100][100];
	
	
	cout<<"\n------TRANSPOSE MATRIKS-------\n\n";
	
	
	cout<<"Masukkan jumlah baris matriks : ";
	cin>>baris;
	cout<<"Masukkan jumlah kolom matriks : ";
	cin>>kolom;
	cout<<"Masukkan Nilai Matriks [baris, kolom]\n";
	for(int i = 1; i <= baris; i++){
		for(int j = 1; j <= kolom; j++){
			cout<<"\t\t\t[ "<<i<<"   ,   "<<j<<"] : ";
			cin>>matriks[i][j];
		}
		cout<<"\n";
	}
	
	cout <<"----Menampilkan Matriks " << "(" << baris << "X" << kolom << ")" << " yang akan ditranspose----\n";
	for(int i = 1; i <= baris; i++){
		for(int j = 1; j <= kolom; j++){
			cout<<matriks[i][j]<<"\t";	
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	cout<<"----Menampilklan Matriks " << "(" << baris << "X" << kolom << ")" << " Setelah ditranspose----\n";
	
	for(int i = 1; i <= kolom; i++){
		for(int j = 1; j <= baris; j++){
			
			cout<<matriks[j][i]<<"\t";	
		}
		cout<<"\n\n";
	}
	
	return 0;
}
