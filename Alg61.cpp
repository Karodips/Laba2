#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int n, i, j, min, zamena, pomoch, pomoch2;
	cin >> n;
	int *mass = new int[n];
	for (i = 0; i < n; i++) {
		cin >> mass[i];
	}
	for (i = 0; i < n; i++) cout << mass[i] << " ";
	cout << endl;
	min = mass[0];
	zamena = mass[0];
	for (i = 1; i < n; i++) {
		if (min < mass[i]){
			min = mass[i];
			zamena = min;
		}
	}
	for (i = 0; i < n - 1; i++) {
		min = zamena;
		for (j = i; j < n; j++) {
			if (mass[j] < min) {
				min = mass[j];
				pomoch2 = j;
			}
		}
		pomoch = mass[i];
		mass[i] = min;
		mass[pomoch2] = pomoch;
	}
	for (i = 0; i < n; i++) cout << mass[i] << " ";
	cout << "\n";
	system("pause");
	return(0);
}
