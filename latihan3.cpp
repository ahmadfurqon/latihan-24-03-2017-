#include <iostream>
using namespace std;

int main () {
	// variabel
	int a,b,temp;
	
	//proses pembaca
	cout << "Masukkan nilai A: ";
	cin >>a;
	
	cout <<"masukkan nilai b: ";
	cin >> b;
	
	//proses tukar
	temp=b;
	b=a;
	a=temp;
	
	// proses tampil
	cout << "================"<< endl;
	cout << "Nilai A sekarang : " << a << endl;
	cout << "Nilai B sekarang : " << b;
	
	return 0;
	}