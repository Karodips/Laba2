#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	float x1, x2, y1, y2, x3, y3, ax, bx, cx, ay, by, cy;
	cout << "Введите координаты вершин треугольника" << "\n";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	ax = x1 - x2;
	bx = x1 - x3;
	cx = x2 - x3;
	ay = y1 - y2;
	by = y1 - y3;
	cy = y2 - y3;
	ax = sqrt(ax * ax + ay * ay);
	bx = sqrt(bx * bx + by * by);
	cx = sqrt(cx * cx + cy * cy);
	x1 = ax + bx + cx;
	x2 = x1/2;
	x3 = sqrt(x2 * (x2 - ax) * (x2 - bx) * (x2 - cx));
	cout << "Периметр треугольника равен " << x1 << " Площадь равна " << x3;
	return 0;
	}
