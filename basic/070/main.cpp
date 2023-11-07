#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	printf("%.3lf", abs(x1 - x2) + abs(y1 - y2));
	return 0;
}
