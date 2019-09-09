#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, x3, y3;
	cout << "Введите координаты точки A, затем точки B, а затем точки C" << "\n";
	cin >> x1 >> x2 >> x3;
	x1 = abs(x1 - x3);
	x2 = abs(x2 - x3);
	cout << "AC = " << x1 << " BC = " << x2 << " AC + BC = " << x2 + x1;
	return 0;
	}
