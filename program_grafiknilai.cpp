#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <ncurses\ncurses.h>
#include <windows.h>
#define n 11
using namespace std;

void loading(){
	initscr();
	
	mvprintw(12, 55, "Loading");
	
	mvprintw(13, 48, "=====================");
	mvprintw(14, 48, "                 ");
	mvprintw(15, 48, "=====================");
			
	for(int r = 1; r < 10; r++){	 
		for(int j = 1; j < 5; j++){
			mvprintw(12, 61 + j, ".");
			refresh();
			Sleep(50);    //mendelay layar selama 0,05 detik				   
	    }	
			mvprintw(14, 48 +r + r, "*");
			refresh();
			Sleep(300);		//mendelay layar selama 0,3 detik		 	  
	}
	
	mvprintw(17, 47, "Press");
		refresh();
		Sleep(300);
		
		mvprintw(17, 53, "Any");
		refresh();
		Sleep(300);
		
		mvprintw(17, 57, "Key");
		refresh();
		Sleep(300);	
		
		mvprintw(17, 61, "To ");
		refresh();
		Sleep(300);
		
		mvprintw(17, 64, "Start.. ");
		refresh();
		Sleep(300);
	_getch();
	endwin();
}



void header(){
	system("cls");
	cout << "\t\t\t\t --------------------------------------------------\n";
	cout << "\t\t\t\t|						   |\n";
	cout << "\t\t\t\t|	SELAMAT DATANG DI PROGRAM GRAFIK NILAI	   |\n";
	cout << "\t\t\t\t|						   |\n";
	cout << "\t\t\t\t --------------------------------------------------\n\n";
	
	cout << "Program ini adalah program yang mengonversi data\n";
	cout << "nilai mahasiswa menjadi suatu diagram sederhana\n";
	cout << "yang diklasifikasikan berdasarkan interval tertentu\n\n";
	
	
}

int main() {
	loading();
	header();
	
    int nilai_mhs[n];
    char tahun[5], jurusan[50], matakuliah[100];
    
	printf ("JURUSAN \t\t: ");
	gets (jurusan);   
	printf ("NAMA MATA KULIAH \t: ");
	gets (matakuliah);
	printf ("ANGKATAN \t\t: ");
	gets (tahun);
    
    cout << "\n\n\t\t\t-----------------------------------------------------------------------------\n";
    cout << "\t\t\t\tMASUKKAN DATA JUMLAH MAHASISWA BERDASARKAN INTERVAL NILAI BERIKUT\n";
    cout << "\t\t\t-----------------------------------------------------------------------------\n\n";
 
    
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
    	system("CLS");
        cout << "\t_____________________________________________________________________________________________________________\n";
        cout << "\t\tGRAFIK PERSEBARAN NILAI MAHASIWA " << jurusan << " " << tahun << " MATA KULIAH " << matakuliah << endl;
        cout << "\t_____________________________________________________________________________________________________________\n\n";

    
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
        
        
        cout << "\nNilai                  Jumlah Mahasiswa";
        

		cin.get();
        return 0;
}
