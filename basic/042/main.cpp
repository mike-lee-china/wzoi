#include <iostream>
using namespace std;

long long permutation(int n, int m) {
	long long lr = 1;
	for (int i = 0; i < m; i++) {
		lr *= (n - i);
	}
	return lr;
}

int main(int argc, char** argv) {
	int m;
	cin >> m;
	cout << permutation(m, 3);
	return 0;
}
