#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
	int ax, ay, bx, by;
	cin>>ax>>ay>>bx>>by;
	long long m = (long long)(ax - bx)*(ax - bx) + (long long)(ay - by)*(ay - by);
	printf("%.3lf\n",sqrt(m));
	return 0;
}
