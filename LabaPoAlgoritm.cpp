#include <iostream>
#include <cmath>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int  factory, i, n;
	double proi, kor, stepan;
	stepan = 1;
	cout << "Введите значение N \n";
	cin >> n;
	kor = 0;
	if (n == 0) {
		factory = 0;
		proi = 0;
	}
	else {
		factory = 1;
		proi = 1;
	}
	if (n > 0) {
		for (i = 1; i <= n; i++) {
			stepan = stepan * 2;
			factory = factory * i;
			proi = proi*(1+1/pow(i,2));
			kor = sqrt(kor) + sqrt(2);
		}

	}
	else if (n < 0) {
		for (i = -1; i >= n; i--) {
			stepan = stepan * 1/2;
			factory = factory * i;
			proi = proi*(1 + 1 / pow(i,2));
			kor = sqrt(kor) + sqrt(2);


		}
	}
	cout << "Результат 2 в степени n " << stepan << "\n" << " Результат n! " << factory << "\n" << " Результат произведений " << proi << "\n" << "Результат корней " << kor << "\n";
	system("pause");
	return 0;
}
