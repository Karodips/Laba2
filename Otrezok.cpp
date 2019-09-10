#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
  float x1,x2,y1,y2;
  cout << "Введите координаты точки A, а затем точки B" << "\n";
  cin >> x1 >> y1 >> x2 >> y2;
  x1 = x1 - x2;
  y1 = y1 - y2;
  cout << sqrt(x1*x1+y1*y1);
  return 0;
}
