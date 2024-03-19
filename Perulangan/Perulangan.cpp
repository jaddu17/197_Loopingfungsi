#include <iostream>
using namespace std;

int main(){
   
	int i;
	int arr[5];

	for (i = 60; i > 10; i -= 10) {
		cout << i << "Selamat Pagi Dunia" << endl;
	}

	cout << "Nilai i terakhir : " << i << endl;

	for (i = 0; i < 5; i++) {
		cout << "Masukkan nilai index ke-" << i << ":";
		cin >> arr[1];
	}
	for (i = 0; i < 5; 1++) {
		cout << "Data Array ke-" << i << ":" << arr[i] << endl;
	}
	return 0;
}