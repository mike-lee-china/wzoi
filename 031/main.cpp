#include<iostream>
using namespace std;

int main(int argc, char** argv) {
	double average = 9.6;
	int judges = 6;
	double noHi = 9.4;
	double noLow = 9.8;

	double all = average * judges;
	double hi = all - noHi * (judges - 1);
	double low = all - noLow * (judges - 1);

	cout << (all - hi - low)/(judges - 2) << endl;
}
