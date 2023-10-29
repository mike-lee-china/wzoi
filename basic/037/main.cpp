#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int bikes, wheels;
	cin>>bikes>>wheels;
	int two_wheels, three_wheels;

	cout<<3*bikes - wheels<<" "<<wheels - 2 * bikes;
	return 0;
}
