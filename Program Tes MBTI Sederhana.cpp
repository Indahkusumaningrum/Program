//Program ini dibuat oleh Indah Kusuma Ningrun
//Pada November 2022


#include <iostream>
using namespace std;


void header();
void ie ();
void sn();
void tf();
void jp();

string nama;
char umur[3];

char karakterie, karaktersn, karaktertf, karakterjp;

int ie1, ie2, ie3, i1, i2, i3, e1, e2, e3, hasili, hasile;
int sn1, sn2, sn3, s1, s2, s3, n1, n2, n3, hasils, hasiln;
int tf1, tf2, tf3, t1, t2, t3, f1, f2, f3, hasilt, hasilf;
int jp1, jp2, jp3, j1, j2, j3, p1, p2, p3, hasilj, hasilp;

int main (){

	
	header();
	
	cout << "\n \nMasukkan Identias Diri Anda \n \n";
	cout << "Nama \t :";
	getline (cin, nama);
	cout << "Umur \t :";
	cin >> umur;
	system ("CLS");
	
	ie();
	
	sn();
	
	tf();
	
	jp();
	
	system("CLS");
	
	cout << "\n\n";
	cout << "++++++++++ HASIL MBTI ++++++++++ \n";
	cout << "Nama \t : " << nama << endl;
	cout << "Umur \t : " << umur << endl;
	cout << "MBTI \t : " << karakterie << karaktersn << karaktertf <<karakterjp;
	
	
	return 0;
}

void header (){
	cout << "\n\n++++++++++++++++++++ TES MBTI SEDERHANA ++++++++++++++++++++ \n\n";
	cout << "SELAMAT DATANG DI TEST MBTI! \n \n";
	cout << "MBTI adalah tes kepribadian dengan serangkaian pertanyaan \n";
	cout << "tentang preferensi seseorang pada empat domain yang berbeda. \n";
	cout << "Empat domain yang dikembangkan oleh Briggs dan Myers yaitu: \n \n";

cout << "\t 1. Introvert (I) \t- Ekstrovert (E) \n";

cout << "\t 2. Sensing (S) \t- Intuition (N) \n";

cout << "\t 3. Thinking (T) \t- Feeling (F)\n";

cout << "\t 4. Judging (J) \t- Perceiving (P) \n\n";
}

void ie (){
	
	ie:
	cout << "Ketika telepon rumah berbunyi yang kamu pikirkan adalah : \n";
	cout << "1. Berharap ada orang lain yang mengangkat telpon \n";
	cout << "2. Segera mengangkat telpon tanpa berpikir \n\n";
	cout << "Jawaban : "; cin >> ie1;
	
	if(ie1 == 1){
		i1 = 1;
	}
	else if (ie1 == 2){
		e1 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto ie;
	}
	
	
	cout << "\n\nSaat mengambil keputusan biasanya kamu : \n";
	cout << "1. Memberi penilaian yang kritis \n";
	cout << "2. Membuat penilaian yang bijak \n";
	cout << "Jawaban : "; cin >> ie2;
	
	if(ie2 == 1){
		i2 = 1;
	}
	else if (ie2 == 2){
		e2 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto ie;
	}
	
	
	cout << "\n\nKamu adalah orang yang lebih suka \n";
	cout << "1. Praktik daripada teori \n";
	cout << "2. Teori daripada praktik \n";
	cout << "Jawaban : "; cin >> ie3;
	
	if(ie3 == 1){
		i3 = 1;
	}
	else if (ie3 == 2){
		e3 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto ie;
	}
	
	hasili = (i1 + i2 + i3);
	hasile = (e1 + e2 + e3);
	if (hasili > hasile){
		karakterie = 'I';
	}
	else{
		karakterie = 'E';
	}
	
}

void sn(){
	
	sn:
	cout <<"\n\nKamu lebih suka untuk : \n";
	cout <<"1. Melakukan uji coba langsung daripada berimajinasi \n";
	cout <<"2. Berkhayal daripada melakukan uji coba langsung \n";
	cout << "Jawaban : "; cin >> sn1;
	
	
	if(sn1 == 1){
		s1 = 1;
	}
	else if (sn1 == 2){
		n1 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto sn;
	}
	
	cout << "\n\nJika lingkungan kerjamu berantakan, kamu akan: \n";
	cout << "1. Menyempatkan waktu untuk merapihkannya \n";
	cout << "2. Membiarkannya selama nyaman untuk bekerja \n";
	cout << "Jawaban : "; cin >> sn2;
	
	
	if(sn2 == 1){
		s2 = 1;
	}
	else if (sn2 == 2){
		n2 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto sn;
	}
	
	cout << "\n\nSaat mendengar gosip, kamu lebih tertarik pada: \n";
	cout << "1. Apa yang sebenarnya terjadi \n";
	cout << "2. Apa kemungkinan lain yang terjadi \n";
	cout << "Jawaban : "; cin >> sn3;
	
	
	if(sn3 == 1){
		s3 = 1;
	}
	else if (sn3 == 2){
		n3 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto sn;
	}
	
	hasils = (s1 + s2 + s3);
	hasiln = (n1 + n2 + n3);
	if (hasils > hasiln){
		karaktersn = 'S';
	}
	else{
		karaktersn = 'N';
	}
	
	
}

void tf(){
	
	tf:
	cout <<"\n\nMana yang paling tidak kamu sukai: \n";
	cout <<"1. Ketika kamu banyak beban pikiran \n";
	cout <<"2. Ketika kamu terjebak dalam rutinitas \n";
	cout << "Jawaban : "; cin >> tf1;
	
	if(tf1 == 1){
		t1 = 1;
	}
	else if (tf1 == 2){
		f1 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto tf;
	}
	
	cout << "\n\nSaat hendak memilih sesuatu, kamu biasanya: \n";
	cout << "1. Segera berpikir untuk memilih dengan cepat \n";
	cout << "2. Butuh waktu lama untuk memilih-milih \n";
	cout << "Jawaban : "; cin >> tf2;
	
	if(tf2 == 1){
		t2 = 1;
	}
	else if (tf2 == 2){
		f2 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto tf;
	}
	
	cout << "\n\nSaat mengambil keputusan, kamu sering mendasarkan pada: \n";
	cout << "1. Informasi dan data yang ada \n";
	cout << "2. Selera dan insting yang kamu rasa \n";
	cout << "Jawaban : "; cin >> tf3;
	
	if(tf3 == 1){
		t3 = 1;
	}
	else if (tf3 == 2){
		f3 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto tf;
	}
	
	hasilt = (t1 + t2 + t3);
	hasilf = (f1 + f2 + f3);
	if (hasilt > hasilf){
		karaktertf = 'T';
	}
	else{
		karaktertf = 'F';
	}
	
}

void jp(){
	jp:
	cout << "\n\nKetika berhubungan dengan orang lain kamu cenderung :\n";
	cout << "1. Tegas daripada lembut \n";
	cout << "2. Lembut daripada tegas \n";
	cout << "Jawaban : "; cin >> jp1;
	
	if(jp1 == 1){
		j1 = 1;
	}
	else if (jp1 == 2){
		p1 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto jp;
	}
	
	cout << "\n\nSaat mengantre biasanya kamu: \n";
	cout << "1. Mengajak orang lain yang mengantri untuk mengobrol \n";
	cout << "2. Tetap diam dan fokus mengantri saja \n";
	cout << "Jawaban : "; cin >> jp2;
	
	if(jp2 == 1){
		j2 = 1;
	}
	else if (jp2 == 2){
		p2 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto jp;
	}
	
	cout << "\n\nDalam menilai orang lain kamu cenderung untuk: \n";
	cout << "1. Bersikap objektif dan adil \n";
	cout << "2. Bersikap ramah dan bersahabat \n";
	cout << "Jawaban : "; cin >> jp3;
	
	if(jp3 == 1){
		j3 = 1;
	}
	else if (jp3 == 2){
		p3 = 1;
	}
	else{
		cout << "INPUTAN ANDA SALAH!!!";
		system("pause");
		system ("CLS");
		header();
		goto jp;
	}
	
	hasilj = (j1 + j2 + j3);
	hasilp = (p1 + p2 + p3);
	if (hasilj > hasilp){
		karakterjp = 'J';
	}
	else{
		karakterjp = 'P';
	}
	
}
