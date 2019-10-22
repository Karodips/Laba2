#include <iostream>
using namespace std;
int main() {
	setlocale(0, "");
	int i, n, j, summapod, summanad, proinad, proipod;
	cin >> n;
	int** mass;
	mass = new int*[n];
	for (i = 0; i < n; i++) mass[i] = new int[n];
	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
		cout << "Введите элемент " << "[" << i + 1 << "][" << j + 1 << "]  ";
		cin >> mass[i][j];
		}
	cout << endl;

	for (i = 0; i < n; i++)
		for (j = 0; j < n; j++)
		{
		cout << mass[i][j] << " ";
		if (j == n - 1) cout << endl;
		}
	cout << endl;
	summanad = 0;
	summapod = 0;
	proinad = 1;
	proipod = 1;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++)
		{
			if (j < i) {
				summapod = mass[i][j] + summapod;
				proipod = mass[i][j] * proipod;
			}
			else if (j > i) {
				summanad = mass[i][j] + summanad;
				proinad = mass[i][j] * proinad;
			}
		}
	}
	cout << summapod << " " << proipod << "\n" << summanad << " " << proinad;
	cout << "\n";
	system("pause");
	return(0);
}
