#include"Çì´õ.h"
#include<vector>

int main() {
	const int SIZE = 3;
	vector<int> a{ 1,2,3 };
	cout << "º¤ÅÍ";
	for (int i = 0; i < SIZE; i++) {
		cout << a.at(i) << ' ';
	}
	cout << endl;
	for (int i : a) {
		cout << i << ' ';
	}
	cout << endl;

	a[1] = 37;

	for (int i = 0; i < SIZE; i++) {
		cout << a.at(i) << ' ';
	}

	vector<int> v(10);
	vector<int> v1(10, 1);

	for (int i : v) {
		cout << i << ' ';
	}
	cout << endl;
	for (int i : v1) {
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}