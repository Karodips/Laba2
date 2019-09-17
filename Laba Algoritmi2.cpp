#include <iostream>
#include <cmath>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int  b, i;
	float n;
	cout << "Введите значение b\n";
	cin >> b;
	n = 0;
	for (i = 100; i <= b; i++)
	{
		n = n + i;
	}
	b = b - 100 + 1;
	n = n / b;
	cout << n << " среднее арифметическое от 100 до b\n";
	system("pause");
	return 0;
}
