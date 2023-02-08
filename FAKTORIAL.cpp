//Indah Kusuma Ningrum
#include <iostream>
using namespace std;

int bilangan, i, hasil = 1;
void opening();
    
void opening(){
	cout << "------------PROGRAM FAKTORIALISASI BILANGAN------------\n\n";
	
}

int main(){
	opening();
    
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    cout << bilangan <<"! = ";
    
    
    for(i = bilangan; i >= 1; i--){
        hasil *= i;
       	
       	 if(i != bilangan){
        	cout<< " x ";
		}
        cout << i; 
        
    }
    cout << endl;
    cout << bilangan <<"! = " << hasil;
       
    return 0;
}
