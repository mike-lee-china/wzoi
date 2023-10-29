#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int legs, heads;
	cin>>legs>>heads;
	cout << (legs - 2 * heads)/(4 -2) << " " << (4 * heads - legs)/(4 -2);
	return 0;
}
