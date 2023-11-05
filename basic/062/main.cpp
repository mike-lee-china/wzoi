#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int count = 0;
	for(int i = 0; i < 3; i++) {
		int a;
		cin >> a;
		for(int j = 0; j <= i; j++) {
			a *= 2;
		}
		count += a;
	}
	cout << count << endl;
	return 0;
}
