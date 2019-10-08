#include <iostream>
#include <math.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, i, sum, proi, amount;
	 cin >> n;
	 proi = 1;
	 sum = 0;
	 amount = 0;
	int *arr = new int[n];

	for (i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] % 2 == 1) {
			sum = sum + arr[i];
			proi = proi * arr[i] ;
			amount = amount + 1;
		}
	}
	if (amount == 0) proi = 0;
	cout << "Сумма " << sum << "\nПроизведение " << proi << "\nКоличество " << amount << endl;
	system("pause");
	return 0;
}
