//Indah Kusuma Ningrum
#include <iostream>
using namespace std;

int bilangan, hasil = 1;
    
void header(){
	cout << "\t\t\t\t------------PROGRAM FAKTORIALISASI BILANGAN------------\n\n";
	
}

int main(){
	header();
    
    cout << "Masukkan bilangan : ";
    cin >> bilangan;
    cout << bilangan <<"! = ";
    
    for(int i = bilangan; i >= 1; i--){
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
