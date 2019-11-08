#include <iostream>

using namespace std;

int main() {
	setlocale(0, "");
	int n, i, j, pomoch, schet;
	cin >> n;
	schet = 0;
	int *mass = new int[n];
	for (i = 0; i < n; i++) cin >> mass[i];
	for (i = 0; i < n; i++) cout << mass[i] << " ";
	cout << endl;
	while (schet < n-1) {
		schet = 0;
		for (i = 0; i < n - 1; i++) {
			if (mass[i] < mass[i+1]) {
				pomoch = mass[i];
				mass[i] = mass[i + 1];
				mass[i + 1] = pomoch;
				pomoch = 0;
			}
			else schet = schet + 1;
		}
	}
	for (i = 0; i < n; i++) cout << mass[i] << " ";
	cout << endl;
	system("pause");
	return 0;
}
