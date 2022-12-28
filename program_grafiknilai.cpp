#include <iostream>
#define n 11
using namespace std;
int main() {
    int nilai_mhs[n];
    string matakuliah, jurusan;
    char tahun[4];
    cout << "NAMA MATA KULIAH\t: "; getline(cin, matakuliah);
    cout << "NAMA JURUSAN\t\t: "; getline(cin, jurusan);
    cout << "TAHUN\t\t\t: "; cin >> tahun; cout << endl << endl;
    cout << "MASUKKAN DATA JUMLAH MAHASISWA BERDASARKAN INTERVAL NILAI BERIKUT\n";
    
    for (int i = 0; i < n ; i++){
       cout << "Jumlah mahasiswa dengan nilai " ;
        
       if(i == 0){
           cout << "0-9   : " ;
           cin >> nilai_mhs[i];
           
       } else if(i == 10){
           cout << "100   : " ;
           cin >> nilai_mhs[i];
           
       } else{
           cout << i * 10 << "-" << i*10 +9 << " : ";
           cin >> nilai_mhs[i];
       }
      cout << endl;
    }
    cout << "MENAMPILKAN GRAFIK PERSEBARAN NILAI MAHASIWA S1 ILMU KOMPUTER 2022 MATA KULIAH DDP" << endl << endl;
    
    for(int i = 0; i < n ; i++){
        if(i == 0){
           	cout << "0-9   : " ;
           	for(int star = 1; star <= nilai_mhs[i] ; star++){
               cout << "*";
          	}
           
       } else if(i == 10){
        	cout << "100   : " ;
           	for(int star = 1; star <= nilai_mhs[i] ; star++){
               cout << "*";
           	}
          
       } else{
            	cout << i * 10 << "-" << i*10 +9 << " : ";
    			for(int star = 1; star <= nilai_mhs[i] ; star++){
               		cout << "*";
           		}   
    	}
        cout << endl;
    }
        return 0;
}
