#include <iostream>
#include <math.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	int n, i, pomoch1,pomoch2,pomoch3,pomoch4;
	cin >> n;
	pomoch1 = 0;
	pomoch2 = 0;
	int *arr = new int[n];
	for (i = 0; i < n; i++) cin >> arr[i];
	pomoch3 = arr[0];
	pomoch4 = arr[0];
	for (i = 0; i != n; i++) {
		if (arr[i] > pomoch3) {
			pomoch3 = arr[i];
			pomoch1 = i;
		}
		if (arr[i] < pomoch4) {
			pomoch4 = arr[i];
			pomoch2 = i;
		}
	}
	cout << pomoch1 << " " << pomoch2 << endl;
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	cout << "\n";
	pomoch3 = arr[pomoch1];
	arr[pomoch1] = arr[pomoch2];
	arr[pomoch2] = pomoch3;
	for (i = 0; i < n; i++) cout << arr[i] << " ";
	system("pause");
	return 0;
}
