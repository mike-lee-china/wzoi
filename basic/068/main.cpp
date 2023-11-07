#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int xa = 0, ya = 0, xb = 0, yb = 0;
	double line = 0;

	for(int i = 0; i < 3; i++) {
		xa = ya;
		xb = yb;
		cin >> ya >> yb;
		line += sqrt(pow((ya-xa),2) + pow((yb - xb),2));
	}
	
	printf("%.5lf", line);
	return 0;
}
