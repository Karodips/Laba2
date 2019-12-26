#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(0, "");
	char stroka[101];
	char Sravnivaem[101];
	int i, Schitaem;
	gets_s(stroka);
	Schitaem = 0;
	gets_s(Sravnivaem);
	int kolvo = strlen(stroka);
	if (kolvo == strlen(Sravnivaem)) {

		for (i = 0; i <= kolvo; i++) {
			if (tolower(stroka[i]) == tolower(Sravnivaem[i])) Schitaem++;
		}
		if (Schitaem-1 == kolvo) cout << "yes";
		else cout << "no";

	}
	else cout << "no";
	cout << endl;
	system("pause");
	return 0;
}
