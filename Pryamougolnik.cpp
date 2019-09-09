#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2;
	cout << "Введите координаты противоположных вершин прямоугольника" << "\n";
	cin >> x1 >> y1 >> x2 >> y2;
	if ((x1 == x2) || (y1 == y2)) {
		cout << "Почему вы не следуете правилам, сэр?";
	}
	else {
		x1 = abs(x1 - x2);
		y1 = abs(y1 - y2);
		cout << "Площадь равна " << x1 * y1 << " Периметр равен " << (x1 + y1) * 2;
	}
	return 0;
	}
