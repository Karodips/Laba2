#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int i, n, j, mini, minj, maxi, maxj, min, max;
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
	max = mass[0][0];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
		if (max < mass[i][j]) {
			max = mass[i][j];
			maxi = i;
			maxj = j;
		}
		}
	cout << endl;
	min = max;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++) {
		if (mass[i][j] < min) {
			min = mass[i][j];
			mini = i;
			minj = j;
		}
		}
	cout << endl;
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
		cout << mass[i][j] << " ";
		if (j == n - 1) cout << endl;
		}
	cout << "\n";
	cout << "Максимум и его индекс = " << max << " " << maxi+1 << maxj+1 << "\nМинимум и его индекс = " << min << mini+1 << minj+1 << endl;
	system("pause");
	return(0);
}
