#include<iostream>
using namespace std;

int main(int agrc, char** argv) {
	int total;
	int num;
	cin >> total >> num;
	double precent = 100.0 * num / total;
	printf("%.4f",precent);
	return 0;
}
