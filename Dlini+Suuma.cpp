#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
  float x1,x2,y1,y2,x3,y3;
  cout << "Введите координаты точки A, затем точки B, а затем точки C" << /n;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
  x1 = x1 - x3;
  y1 = y1 - y3;
  x2 = x2 - x3;
  y2 = y2 - y3;
  cout << sqrt(x1*x1+y1*y1) << sqrt(x2*x2+y2*y2) << sqrt(x2*x2+y2*y2)+sqrt(x1*x1+y1*y1) << "Сначала идут значения длин отрезков A и B соответственно, а затем их сумма";
  return 0;
}
