//Nama 		: Indah Kusuma Ningrum
//NPM-KELAS	: 2217051139-B
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	
	float fisika[10], kimia[10], matematika[10], biologi[10], bahasa_inggris[10];
	float total_fisika, total_kimia, total_matematika, total_biologi, total_bahasainggris;
	string mapel[] = {"Fisika", "Kimia", "Matematika", "Biologi", "Bahasa Inggris"};
	int banyak_mapel = sizeof(mapel)/sizeof(*mapel);
	float banyak_data, jumlah_data[10], rata_siswa[10], rata_mapel[10];
	char nama[10][10];
	
	//Input banyaknya data yang akan direkap
	cout << "Masukkan banyak data: ";
	cin >> banyak_data;
	
	for (int i = 0; i < banyak_data; i ++){
		
		cout << "---------------------" << endl;
		cout << "Data ke-" << i + 1 << endl;
		cout << "---------------------" << endl;
		cout << "Nama panggilan \t: " ; cin >> nama[i];
		cout << "Fisika \t\t: " ; 		cin >> fisika[i];
		cout << "Kimia \t\t: " ; 		cin >> kimia[i];
		cout << "Matematika \t: " ; 		cin >> matematika[i];
		cout << "Biologi \t: " ; 		cin >> biologi[i];
		cout << "Bahasa inggris \t: " ;		cin >> bahasa_inggris[i];
			
		cout << endl;
	//Menghitung rata-rata nilai siswa
	jumlah_data[i] = fisika[i] + kimia[i] + matematika[i] + biologi[i] + bahasa_inggris[i];
	rata_siswa[i] = jumlah_data[i]/banyak_mapel;

	
	//Menghitung rata-rata mata pelajaran
	total_fisika += fisika[i];
	total_kimia += kimia[i];
	total_matematika += matematika[i];
	total_biologi += biologi[i];
	total_bahasainggris += bahasa_inggris[i];
	
	rata_mapel[0] = (total_fisika)/banyak_data;
	rata_mapel[1] = (total_kimia)/banyak_data;
	rata_mapel[2] = (total_matematika)/banyak_data;
	rata_mapel[3] = (total_biologi)/banyak_data;
	rata_mapel[4] = (total_bahasainggris)/banyak_data;
}	
	cout << endl;
		
	//output tabel 
	cout << "------------------------------------------------------------------------------------------------\n";
	cout << setw(5) << "No" << setw(10) << "Nama"
		 <<	setw(15) << mapel[0] << setw(15) << mapel[1]
		 <<	setw(15) << mapel[2] << setw(15) << mapel[3] << setw(20) << mapel[4] << endl;
	cout << "------------------------------------------------------------------------------------------------\n";		
	
	for(int i = 0; i < banyak_data; i++){
	int no = i +1;
	cout << setw(4) << no << setw(10) << nama[i]
		 << setw(14) << fisika[i] << setw(15) << kimia[i]
		 << setw(13) << matematika[i] << setw(16) << biologi[i] << setw(17) << bahasa_inggris[i] << endl;
	
	}	
	//output Total Nilai
	cout << "\n\n----------------------------\n";
	cout << "Total Nilai Tiap Mahasiswa" << endl;
	cout << "----------------------------\n";

	for(int i = 0; i < banyak_data; i++){
		cout << nama[i] << "\t: " << jumlah_data[i] << endl;
	}	
	
	//output rata rata siswa
	cout << "\n\n----------------------------\n";
	cout << "Rata-Rata Tiap Mahasiswa" << endl;
	cout << "----------------------------\n";
	for(int i = 0; i < banyak_data; i++){
		cout << nama[i] << "\t: " << rata_siswa[i] << endl;
	}
	
	//output Total Nilai per mapel
	cout << "\n\n----------------------------\n";
	cout << "Total Nilai per Mapel" << endl;
	cout << "----------------------------\n\n";
	cout << "Fisika \t\t: " << total_fisika << endl;
	cout << "Kimia \t\t: " << total_kimia << endl;
	cout << "Matematika \t: " << total_matematika << endl;
	cout << "Biologi \t: " << total_biologi << endl;
	cout << "Bahasa Inggris \t: " << total_bahasainggris << endl;
	
	
	//output rata rata mapel
	cout << "\n\n----------------------------\n";
	cout << "Rata-Rata Mata Kuliah" << endl;
	cout << "----------------------------\n";

	for(int i = 0; i < banyak_mapel; i++){
	cout << mapel[i] << "\t: " << rata_mapel[i] << endl;
	}
}
