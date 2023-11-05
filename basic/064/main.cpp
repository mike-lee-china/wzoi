#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int h, r;
	cin>>h>>r;
	double c = h * r * r * 3.14159;
	int m = 20 * 1000 / c + 1;
	cout << m << endl;
	return 0;
}
