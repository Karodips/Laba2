#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int i, n, j, max;
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
	for (i = 0; i < n; i++) {
		max = mass[i][0];
		for (j = 0; j < n; j++)
		{
			if (max < mass[i][j]) {
				max = mass[i][j];
			}
		}
		mass[i][i] = max;
	}
	cout << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
		cout << mass[i][j] << " ";
		if (j == n - 1) cout << endl;
		}
	cout << "\n";
	system("pause");
	return(0);
}
