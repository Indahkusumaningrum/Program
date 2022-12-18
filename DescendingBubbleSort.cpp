#include <iostream>
using namespace std;

int main(){
	int angka[100];
	int temp = 0; //variabel untuk menyimpan sementara bilangan yg akan ditukar
	int banyak_bil;
	
	
	cout << "Masukkan banyaknya bilangan : "; 
	cin >> banyak_bil; 
	cout << endl;
	
	for(int i = 0; i< banyak_bil; i++){
		cout << "Bilangan ke- " << i + 1 << " : "; 
		cin >> angka[i]; 
		cout << endl;
	}

	cout << "\nArray sebelum disorting : ";
		for (int i = 0; i < banyak_bil; i++){
			cout << angka[i] << " ";
			
		}
	
	//proses sorting	
	for (int i=0; i < banyak_bil; i++){
		for (int j=0; j<banyak_bil-i-1 ; j++){
			if (angka[j] < angka [j+1]){
				temp = angka [j];
				angka[j] = angka [j+1];
				angka [j+1] = temp;
			}
		}
	}
	
	cout << "\nArray sesudah disorting : ";
	for (int i=0; i < banyak_bil; i++){
		cout << angka[i] << " ";
	}
}
