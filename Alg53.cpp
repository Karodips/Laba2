#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int i, n, j, m, summa, proi;
	cin >> m;
	cin >> n;
	int** mass;
	mass = new int*[m];
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
	for (i = 0; i < m; i++) {
		summa = 0;
		proi = 1;
		for (j = 0; j < n; j++)
		{
			summa = summa + mass[i][j];
			proi = proi*mass[i][j];
		}
		cout << summa << " " << proi << endl;
	}
	cout << "\n";
	system("pause");
	return(0);
}
