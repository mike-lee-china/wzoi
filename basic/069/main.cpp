#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int h, v, x1, y1, x2, y2;
	cin >> h >> v >> x1 >> y1 >> x2 >> y2;
	double time = (sqrt(x1*x1 + y1*y1) + h + sqrt(x2*x2 + y2*y2)) / v;
	printf("%.2lf\n",time);
	return 0;
}
