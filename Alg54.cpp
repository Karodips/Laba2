#include <iostream>
using namespace std;
int main() {
	system("color F0");
	setlocale(0, "");
	int i, n, j, m;
	cin >> m;
	cin >> n;
	int* kolvo = new int[n];
	int* summa = new int[n];
	int** mass;
	mass = new int* [m];
	for (i = 0; i < m; i++) mass[i] = new int[n];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			cout << "Введите элемент " << "[" << i + 1 << "][" << j + 1 << "]  ";
			cin >> mass[i][j];
		}
	cout << endl;

	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
		{
			cout << mass[i][j] << " ";
			if (j == n - 1) cout << endl;
		}
	cout << endl;
	for (i = 0; i < n; i++) {
		summa[i] = 0;
		kolvo[i] = 0;
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++)
		{
			if (mass[i][j] > 0) {
				summa[j] = summa[j] + mass[i][j];
				kolvo[j] = kolvo[j] + 1;
			}
		}
	}
	for (i = 0; i < n;i++) cout << summa[i] << " ";
	cout << endl;
	for (i = 0; i < n; i++) cout << kolvo[i] << " ";
	cout << "\n";
	system("pause");
	return(0);
}
