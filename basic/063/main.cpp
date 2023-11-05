#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int m, n, a;
	cin>>m>>n>>a;
	long long r = m/a;
	long long c = n/a;
	cout<<r*c<<endl;
	return 0;
}
