//Indah Kusuma Ningrum [01/02/2023, 22.36]
#include <iostream>
using namespace std;

void header (){
	
	cout << "\t\t -------------------------------------------------------\n";
	cout << "\t\t|	PROGRAM DERET FIBONACCI (FIBONACCI SEQUENCE)	|\n";
	cout << "\t\t -------------------------------------------------------\n\n";

}

void program(){
	
	int fibo_n, fibo_n_1, fibo_n_2;
	int n;
	
	cout << "Masukkan nilai n (banyaknya deret) : ";
	cin >> n;
	
	cout << "\n\n====================================\n";
	cout << "DERET FIBONACCI : ";
	
	
	fibo_n_2 = 0;
	fibo_n_1 = 1;
	
	cout << fibo_n_2 << " " ; //menampilkan deret pertama fibonacci yaitu 0
	
	if(n > 1){
	
		cout << fibo_n_1 << " "; //deret kedua akan ditampilkan apabila nilai n lebih dari 1, apabila nilai n=0 maka tidak ditampilkan
	}
	
	for(int i = 0; i < (n-2); i++){ //batas akhir (n - 2) karena 2 deret sebelumnya telah dioutput di atas
		
		fibo_n = (fibo_n_1 + fibo_n_2); //Rumus deret fibonacci
		
		fibo_n_2 = fibo_n_1;
		fibo_n_1 = fibo_n;
		
		cout << fibo_n << " ";		
	}
	
	cout << "\n====================================\n";
	
}

int main(){
	
	header();
	program();
	
	cin.get();
	return 0;
}
