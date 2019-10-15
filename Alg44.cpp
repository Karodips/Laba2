#include <iostream>
using namespace std;
int main() {
	int i,n;
	cin >> n;
	int *mass = new int[n];
	for (i = 0; i < n; i++) {
		cin >> mass[i];
		if (mass[i] % 2 == 1) mass[i] = (i+1)*(i+1);
	}
	cout << "\n";
	for (i = 0; i < n; i++) cout << mass[i] << " ";
	cout << "\n";
	system("pause");
	return(0);
}
