#include"���.h"
#include<list>

bool predicate(int num) {
	return num >= 37 && num < 100;
}

int main() {
	list<int> it;

	for (int i = 0; i < 20; i++) {
		it.push_back(rand() % 200 + 1);
	}
	list<int>:: iterator iter;

	cout << "���" << endl;
	for (iter = it.begin(); iter != it.end(); iter++) {
		cout << *iter << " ";

	}
	cout << endl;

	it.remove(10);

	for (int i : it) {
		cout << i << endl;
	}

}