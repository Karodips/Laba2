#include <iostream>
#include <cmath>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int i, j, n, b;
	b = 0;
	cout << "Введите число N\n";
	cin >> n;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= n; j++){
			b = b + i;
			cout << b << " ";
		}
		b = 0;
		cout << "\n";
	}
	system("pause");
	return 0;
}
