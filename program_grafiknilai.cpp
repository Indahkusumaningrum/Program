//Updated on [02/02/2023, 14.38]
#include <iostream>
#include <stdio.h>
#define n 11
using namespace std;
int main() {
    int nilai_mhs[n];
    char tahun[5], jurusan[50], matakuliah[100];
    
	printf ("NAMA MATA KULIAH \t: ");
	gets (matakuliah);
	printf ("TAHUN \t\t\t: ");
	gets (tahun);
	printf ("JURUSAN \t\t: ");
	gets (jurusan);
    
    cout << "\n\n\t\t-----------------------------------------------------------------------------\n";
    cout << "\t\t\tMASUKKAN DATA JUMLAH MAHASISWA BERDASARKAN INTERVAL NILAI BERIKUT\n";
    cout << "\t\t-----------------------------------------------------------------------------\n\n";
 
    
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
        cout << "_____________________________________________________________________________________________________________\n";
        cout << "\tMENAMPILKAN GRAFIK PERSEBARAN NILAI MAHASIWA " << jurusan << " " << tahun << " MATA KULIAH " << matakuliah << endl;
        cout << "_____________________________________________________________________________________________________________\n\n";

    
    for(int i = 0; i < n ; i++){
        if(i == 0){
           	cout << "0-9   \t| " ;
           	for(int star = 1; star <= nilai_mhs[i] ; star++){
               cout << "*";
          	}
           
       } else if(i == 10){
        	cout << "100   \t| " ;
           	for(int star = 1; star <= nilai_mhs[i] ; star++){
               cout << "*";
           	}
          
       } else{
            	cout << i * 10 << "-" << i*10 +9 << " \t| ";
    			for(int star = 1; star <= nilai_mhs[i] ; star++){
               		cout << "*";
           		}   
    	}
        cout << endl;
    }   
        cout << "\t|"; cout << "________________________________________";

		cin.get();
        return 0;
}
