/*Program ini dibuat oleh Indah Kusuma Ningrum
Pada tanggal 8 Oktober 2022
NPM 2217051139, Kelas B, Program Studi S1 Ilmu Komputer*/

#include <iostream>
using namespace  std;

int main(){
	
	//-----Deklarasi Variabel-----
	int baris,  kolom;
	int matriksA[100][100];
	
	//Mengoutputkan atau Menampilkan judul program
	cout<<"\n------PROGRAM TRANSPOSE MATRIKS 3x3-------\n\n";
	
	/*Karena program ini dibuat hanya untuk matriks ber-orde 3X3,
	Maka kita tidak perlu membuat perintah input jumlah baris dan kolom.
	Kita dapat langsung mengisi variabel baris dan kolom dengan nilai 3
	*/
	baris = 3;
	kolom = 3;
	
	//Membuat perintah untuk menginputkan isi matriks
	cout<<"Masukkan Nilai Matriks [baris, kolom]\n";
	
	/*
	-ini adalah Looping atau perulangan untuk menampilkan [baris, kolom] matriks yang akan diisi nilainya
	jadi looping ini dibuat untuk mempermudah kita supaya saat kita input isi matriksnya, kita tau
	sudah sampe baris dan kolom ke berapa
	
	-Looping variabel i untuk baris, i dimulai dari 1 bukan 0 (karena matriks tidak ada baris ke-0)
	-Batas akhir i adalah i <= baris, karena variabel baris sudah kita isi nilainya 3, maka
	batas akhir i dapat juga kita tulis i <= 3. (Tapi terserah saya kak, saya lebih suka i <= baris hehe)
	-i increment atau bertambah karena kita akan mengisi nilai matriks dari baris 1, 2, 3 bukan dari
	baris 3, 2, 1
	*/
	for(int i = 1; i <= baris; i++){
		
		/*
		-Looping variabel j untuk kolom. Sama seperti i, j juga dimulai dari 0
		karena matriks tidak ada kolom ke 0, pasti dimulai dari 1. 
		-Batas akhir j ini j <= kolom sama kaya i
		-j increment karena kita akan mengisi nilai matriks dari baris terkecil ke
		baris terbesar
		 */
		for(int j = 1; j <= kolom; j++){
			
			/*
			-Kemudian kita tampilkan perulangan dari i dan j, yang dimana
			i mewakilkan baris dan j mewakilkan kolom
			-Disini saya beri 3 tab untuk meratakan outputnya supaya lebih rapi
			 */
			cout<<"\t\t\t[ "<<i<<"   ,   "<<j<<"] : ";
			
			/*-Nilai atau isi matriks yang telah diinput akan kita simpan dalam
			variabel matriksA[i=baris][j=kolom] */
			cin>>matriksA[i][j];
		}
		//Saya memberi endline dalam perulanga i dan diluar perulangan j,
		//karena saya ingin ketika baris matriksnya bertambah (dari baris 1 ke baris 2),
		//akan menampilkan satu enter
		cout<<"\n";
	}
	
	
	/*-Looping untuk menampilkan matriks yang sudah ada nilainya tapi belum ditranspose*/
	cout<<"----Menampilkan Matriks (3X3) sebelum ditranspose----\n";
	
	//Untuk batas i dan j nya sama persis seperti perulangan sebelumnya,
	//kita hanya akan mengubah outputnya supaya berbentuk seperti matriks (gimana si ka bingung ngejelasinnya wkwk)
	for(int i = 1; i <= baris; i++){
		for(int j = 1; j <= kolom; j++){
			
			//terus udah gitu, kita tampilin aja matriks yang udah berisi nilai, yang tadi
			//kita simpan di variabel matriksA[i][j]
			cout<<matriksA[i][j]<<"\t";	
		}
		cout<<"\n\n";
	}
	cout<<"\n\n";
	
	/*Kemudian yang terakhir adalah perulangan untuk memproses dan menampilkan matriks transpose */
	cout<<"----Menampilklan Matriks (3x3) Setelah ditranspose----\n";
	
	/*Batas awal i dan j nya masih sama, yaitu 1. Tapi batas akhirnya dibalik,
	Batas akhir i <= kolom, dan batas akhir j <= baris
	Karena ketika kita men-transpospe matriks misalnya matriks awal ber-orde 2X3
	ketika sudah ditranspose ordenya akan berubah menjadi 3X2. Maka, batas akhir i dan j nya ditukar
	Yaaa walaupun itu gak berlaku di program ini, karena 3X3 ditranspose tetep jadi 3X3 wkwk tapi gak apa */
	for(int i = 1; i <= kolom; i++){
		for(int j = 1; j <= baris; j++){
			
			
			//Step terakhir, kita outputin matriks transposenya, dengan menukar i dan j
			//Berbeda dengan matriks awal yang barisnya diwakilkan dengan i dan kolomnya diwakilkan dengan j,
			//matriks transpose adalah kebalikannya, yaitu barisnya diwakilkan dengan j, dan kolomnya diwakilkan
			//dengan i
			//Maka coutnya seperti di bawah ini:
			cout<<matriksA[j][i]<<"\t";	
		}
		cout<<"\n\n";
	}
	
	return 0;
}
