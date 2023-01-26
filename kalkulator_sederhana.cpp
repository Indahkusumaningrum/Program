#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

float bil1, bil2, hasil;
char operator_aritmatika, pil_user;

void setcolor (unsigned short color){
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hCon, color);
}

void header(){

	cout << "-----------------KALKULATOR SEDERHANA (+ - * /)-----------------\n\n";
}
int main (){
	header();	

perhitungan:
	cout << "Bilangan pertama\t : ";
	cin >> bil1;
	cout << "Operator Aritmatika\t : ";
	cin >> operator_aritmatika;
	cout << "Bilangan kedua\t\t : ";
	cin >> bil2;
	

	setcolor (03);
	cout << "\n\n==================\n";
	cout << "HASIL PERHITUNGAN\n";
	cout << "==================\n\n";
	setcolor (07);
	
	cout << bil1 << " " << operator_aritmatika << " " << bil2 << " = ";
	
	switch (operator_aritmatika){
	
	case '+':
		hasil = bil1 + bil2;
		cout << hasil;
		break;
	case '-':
		hasil = bil1 - bil2;
		cout << hasil;
		break;
	case '*':
		hasil = bil1 * bil2;
		cout << hasil;
		break;
	case '/':
		hasil = bil1 / bil2;
		cout << hasil;
		break;
	default :
		setcolor (04);
		cout << "\nHasil tidak dapat ditentukan karena operator tidak tersedia\n";
		setcolor (7);
		cout << "Tekan enter untuk kembali ke menu";
		getch();
		goto menu;
	}
	menu:
	setcolor (03);
	cout << "\n\n==================\n";
	cout << "	MENU		\n";
	cout << "==================\n\n";
	setcolor (07);
	cout << "[1] Buat perhitungan baru\n";
	cout << "[2] Lanjutkan hasil perhitungan terakhir\n";
	cout << "[0] Tutup Program";
	
	cout << "\n\nMasukkan pilihan : ";
	cin >> pil_user;

	
	if (pil_user == '1'){
		system ("CLS");
		header();
		do{
			goto perhitungan;
			goto menu;
		} while (pil_user == '1');
		
	}else if(pil_user == '2'){
		
		system("CLS");
		header();
		
		bil1 = hasil;
		bil2 = 0;
		
		cout << "HASIL TERAKHIR\t\t : " << hasil << endl;
		cout << "Operator\t\t : ";
		cin >> operator_aritmatika;
		cout << "Bilangan kedua\t\t :";
		cin >> bil2;
		
	setcolor (03);
	cout << "\n\n==================\n";
	cout << "HASIL PERHITUNGAN\n";
	cout << "==================\n\n";
	setcolor (07);
	
	cout << bil1 << " " << operator_aritmatika << " " << bil2 << " = ";
		
	switch (operator_aritmatika){
	
	case '+':
		hasil += bil2;
		cout << hasil;
		break;
	case '-':
		hasil -= bil2;
		cout << hasil;
		break;
	case '*':
		hasil *= bil2;
		cout << hasil;
		break;
	case '/':
		hasil /= bil2;
		cout << hasil;
		break;
	default :
		setcolor (04);
		cout << "\nHasil tidak dapat ditentukan karena operator tidak tersedia";
		setcolor (7);
	}
		
		do{
		goto menu;
		} while (pil_user == '2');
		
	}else if(pil_user == '0'){
		system ("CLS");
		cout <<	"TERIMA KASIH TELAH MENGGUNAKAN KALKULATOR INI";
	
	}else{
		setcolor (04);
		cout << "INPUTAN ANDA SALAH";
		setcolor (04);
		cout << "Tekan enter untuk kembali ke menu";
		getch;
		goto menu;
	}
	
	cin.get();
	return 0;
}
