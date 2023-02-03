//Indah Kusuma Ningrum [03/02/2023, 09.47]
#include <iostream>
using namespace std;

int main(){
	int n;
	
	cout << "Masukkan panjang pola : ";
	cin >> n;
	
	cout << "---------------\n";
	cout << "POLA 1\n";
	cout << "---------------\n";

	for (int i = 1; i <= n; i++){
		
		for(int j = 1; j <=i; j++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "---------------\n";
	cout << "POLA 2\n";
	cout << "---------------\n";

	for (int i = 1; i <= n; i++){
		
		for(int j = n; j >=i; j--){
			cout << "*";
		}
		cout << endl;
	}
	
	
	cout << "---------------\n";
	cout << "POLA 3\n";
	cout << "---------------\n";

	for (int i = 1; i <= n; i++){
		
		for(int j = 1; j < i; j++){
			cout << " ";
		}
		
		for(int k = n; k >= i; k--){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "---------------\n";
	cout << "POLA 4\n";
	cout << "---------------\n";

	for (int i = 1; i <= n; i++){
		
		for(int j = n; j > i; j--){
			cout << " ";
		}
		
		for(int k = 1; k <= i; k++){
			cout << "*";
		}
		cout << endl;
	}
	
	cout << "---------------\n";
	cout << "POLA 5\n";
	cout << "---------------\n";

	for (int i = 1; i <= n; i++){
		
		for(int j = n; j > i; j--){
			cout << " ";
		}
		
		for(int k = 1; k <= i; k++){
			cout << "*";
		}
		
		for(int l = 1; l < i; l++){
			cout << "*";
		}		
		cout << endl;
	}
	
	cout << "---------------\n";
	cout << "POLA 6\n";
	cout << "---------------\n";

	for (int i = 1; i <= n; i++){
		
		for(int j = 1; j < i; j++){
			cout << " ";
		}
		
		for(int k = n; k >= i; k--){
			cout << "*";
		}
		
		for(int l = n; l > i; l--){
			cout << "*";
		}
		cout << endl;
	}
	
	
	cout << "---------------\n";
	cout << "POLA 7\n";
	cout << "---------------\n";

	for (int i = 1; i <= n; i++){
		
		for(int j = n; j > i; j--){
			cout << " ";
		}
		
		for(int k = 1; k <= i; k++){
			cout << "*";
		}
		
		for(int l = 1; l < i; l++){
			cout << "*";
		}		
		cout << endl;
	}
	for (int i = 1; i <= n; i++){
		
		for(int j = 1; j < i; j++){
			cout << " ";
		}
		
		for(int k = n; k >= i; k--){
			cout << "*";
		}
		
		for(int l = n; l > i; l--){
			cout << "*";
		}
		cout << endl;
	}	
	
	cin.get();
	return 0;
}
