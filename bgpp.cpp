#include <iostream>
using namespace std;

void kalimat(){
	cout << endl;
	cout << "===========================================" << endl;
	cout << "===PROGRAM APLIKASI KALKULATOR SEDERHANA===" << endl;
	cout << "===========================================" << endl;	
	cout << endl << endl;
}

// Fungsi untuk menambah dua angka dalam array
int tambah(int angka[]) {
return angka[0] + angka[1];
}

// Fungsi untuk mengurangi dua angka dalam array
int kurang(int angka[]) {
return angka[0] - angka[1];
}

// Fungsi untuk mengalikan dua angka dalam array
int kali(int angka[]) {
return angka[0] * angka[1];
}

// Fungsi untuk membagi dua angka dalam array
int bagi(int angka[]) {
return angka[0] / angka[1];
}

int main() {
int angka[2];
string nama[1];
char op;
char pilih;

kalimat();
cout << "masukan username : ";
cin >> nama[0];

system("cls");
kalimat();
cout << "halo " << nama[0] << endl;
cout << "masuk program (i)" << endl;
cout << "keluar program (o)" << endl;
cout << "tentukan pilihan : ";
cin >> pilih;

while(pilih=='i'){
	mymenu:
	system("cls");
	kalimat();
	cout << "Masukkan angka pertama \t\t: ";
	cin >> angka[0];
	cout << "Masukkan angka kedua \t\t: ";
	cin >> angka[1];
	cout << "Masukkan operator (+, -, *, /)  : ";
	cin >> op;

	switch(op) {
    	case '+':
    		cout << endl;
    		cout << "username \t: " << nama[0] << endl;
			cout << "penjumlahan \t: " << angka[0] << op << angka[1] << " = " << tambah(angka) << endl;
			break;
    	case '-':
    		cout << endl;
    		cout << "username \t: " << nama[0] << endl;
			cout << "penjumlahan \t: " << angka[0] << op << angka[1] << " = " << kurang(angka) << endl;
			break;
    	case '*':
    		cout << endl;
    		cout << "username \t: " << nama[0] << endl;
			cout << "penjumlahan \t: " << angka[0] << op << angka[1] << " = " << kali(angka) << endl;
			break;
    	case '/':
    		cout << endl;
    		cout << "username \t: " << nama[0] << endl;
			cout << "penjumlahan \t: " << angka[0] << op << angka[1] << " = " << bagi(angka) << endl;
        	break;
    	default:
    		cout << "Operator tidak valid" << endl;
	}
		cout << endl;
    	cout << "ingin kembali ke program (y/t): ";
    	cin >> pilih;
    	if(pilih == 'y'){
    		goto mymenu;
		}else{
			return 0;
		}
	}
	return 0;
}

