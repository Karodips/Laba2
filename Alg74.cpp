#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(0, "");
	char stroka[101];
	int i, Schitaem, kolvo, j, Desinsector1;
	gets_s(stroka);
	Schitaem = 0;
	Desinsector1 = 0;
	kolvo = strlen(stroka);
	for (i = 0; i < kolvo; i++) {
		if (stroka[i] == ' ') {
			Desinsector1++;
			for (j = i; j < kolvo - 1; j++) {
				stroka[j] = stroka[j + 1];
			}
			i--;
		}
	}
	kolvo -= Desinsector1;
	j = kolvo;
	for (i = 0; i < kolvo; i++) {
		if (tolower(stroka[i]) == tolower(stroka[kolvo-1])) Schitaem++;
		cout << stroka[i] << " " << stroka[kolvo-1] << endl;
		kolvo--;
	}
	if (j%2 == 0 && Schitaem == (j/2)) cout << "Перевёртыш";
	else if (j % 2 != 0 && Schitaem == (j / 2)+1) cout << "Перевёртыш";
	else cout << "Не перевёртыш";
	cout << endl;
	system("pause");
	return 0;
}
