#include <iostream>
#include <string.h>
#include <locale.h>

using namespace std;

int main() {
	setlocale(0,"");
	char stroka[101];
	int i;
	gets(stroka);
	int kolvo = strlen(stroka);
	for ( i = 0; i <= kolvo; i++) stroka[i] = tolower(stroka[i]);
	for (i = 0; i<= kolvo; i++) cout << stroka[i];
	cout << endl;
	system("pause");
	return 0;
}
