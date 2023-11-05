#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	double a, b;
	cin >> a >> b;
	int x = a/b;
	double m = a - b * x;
	printf("%.4f\n",m);
	return 0;
}
