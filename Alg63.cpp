#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int i, n, j, schet, pomoch;
	cin >> n;
	int** mass;
	mass = new int*[n];
	for (i = 0; i < n; i++) mass[i] = new int[n];
	for (i = 0; i < n; i++) 
		for (j = 0; j < n; j++)
		{
		cout << "Введите элемент " << "[" << i+1 << "][" << j+1 << "]  ";
		cin >> mass[i][j];
		}
	for (i = 0; i< n; i++) {
		for (j=0;j<n;j++) {
			cout << mass[i][j] << " ";	
		}
		cout << endl;
	}
	cout << endl;
	schet = 0;
	while (schet<n-1) {
		for (i=0;i<n-1;i++) {
			if (mass[i][i] > mass[i+1][i+1]) {
				pomoch = mass[i][i];
				mass[i][i] = mass[i+1][i+1];
				mass[i+1][i+1] = pomoch;
			}
			else schet++;
		}
	}
	for (i = 0; i< n; i++) {
		for (j=0;j<n;j++) {
			cout << mass[i][j] << " ";	
		}
		cout << endl;
	}
	system("pause");
	return(0);
}
