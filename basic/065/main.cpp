#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin>>n;
	long long m = (long long) (2 + 2 + (n - 1) * 3) * n / 2;
	cout<<m<<endl;
}
