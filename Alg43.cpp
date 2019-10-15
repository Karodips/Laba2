
#include <iostream>
#include <math.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, i, b;
	cout << "Сначала размер массива, затем значение b.\n";
	cin >> n >> b;
	int *arr = new int[n];
	cout << "Теперь задайте массивю.\n";
		for (i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] < b) arr[i] = 0;
		}
		for (i = 0; i < n; i++) cout << arr[i] << " ";
		cout << "\n";
	
	system("pause");
	return 0;
}
