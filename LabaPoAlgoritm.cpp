#include <iostream>
#include <cmath>

using namespace std;
main() {
	setlocale(LC_ALL, "Russian");
	int n, stepan, factory, i;
	double proi, kor;
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
	for (i = 1; i <= abs(n); i++) {
		stepan = stepan * 2;
		factory = factory * n;
		proi = proi*(1 + 1 / (i*i));
		kor = sqrt(kor) + sqrt(2);


	}
	cout << "Результат 2 в степени n " << stepan << "\n" << " Результат n! " << factory << "\n" << " Результат произведений " << proi << "\n" << "Результат корней" << kor;
	return 0;
}
