//Indah Kusuma Ningrum, 16/02/2023 19.37
#include <iostream>
using namespace std;

int main (){
  int n, x;
  char pilihan;
  
  cout << "Masukkan banyaknya angka (n) : ";
  cin >> n;
  
  cout << "\n\nPILIHAN : \n";
  cout << "[1]. SKIP ANGKA TERTENTU\n";
  cout << "[2]. BERHENTI DI ANGKA TERTENTU\n";
  cout << "INPUT PILIHAN ANDA : ";
  cin >> pilihan;
  
  
  if(pilihan == '1'){
        cout << "Masukkan angka yang ingin diskip : ";
        cin >> x;
        for (int i = 1; i <= n; i++){
            while(i == x){
                continue;
            }
            cout << i << "\n";
            
        }
        
  } else if (pilihan == '2'){
    
  } else {
      cout << "INPUTAN LU SALAH CUYY!!!";
  }
  
  return 0;
}
