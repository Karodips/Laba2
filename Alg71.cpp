#include <iostream>
#include <string.h>

using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	char stroka[101];
	gets(stroka);
	int kolvo = strlen(stroka);
	cout << kolvo;
	system("pause");
	return 0;
}
