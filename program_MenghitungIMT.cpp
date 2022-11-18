//Program ini dibuat oleh Indah Kusuma Ningrum
//Pada Oktober 2022
//NPM 2217051139 Kelas B S1 Ilmu Komputer 2022
#include<iostream>
using namespace std;
int main (){
	
	float tinggi, berat, mt, tinggicm, tinggi2;
	string nama, umur, kategori;
	
	cout<<"\n\n------MENGHITUNG INDEKS MASSA TUBUH (IMT)------\n\n"<<endl;
	
	cout << "Nama\t\t\t: ";
	getline (cin, nama);
	cout << "Umur\t\t\t: ";
	cin >> umur;
	cout << "Berat badan (kg)\t: ";
	cin >> berat;
	cout << "Tinggi badan (cm)\t: ";
	cin >> tinggicm;
	system ("pause");
	
	//proses perhitungan IMT
	tinggi = tinggicm / 100; //untuk mengonversi tinggi dalam cm ke meter
	tinggi2 = tinggi*tinggi;
	
	mt = berat/tinggi2; //rumus IMT
	
	//Percabangan untuk mengetahui kategori level berdasarkan IMT yang telah dihitung sebelumnya
	if (mt < 18.5){
		kategori = "Kurus";
	}
	else if ( mt < 24.5){
		kategori = "Normal";
	}
	else if ( mt < 29.9){
		kategori = "Gemuk";
	}
	else if (mt > 30)
		kategori = "Obesitas";
	
	//Hasil
	system ("CLS");
	cout << "\n-----------------------HASIL-------------------\n\n";	
	cout << "Nama\t\t: " << nama << endl;
	cout << "Umur\t\t: " << umur << endl;
	cout << "Berat badan\t: " << berat << " kg\n";
	cout << "Tinggi badan\t: " << tinggicm << " cm\n";
	cout << "IMT\t\t: " << mt << endl;
	cout << "Kategori\t: " << kategori;
	

return mt;
}
