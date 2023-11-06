#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int a1, a2, n;
	cin>>a1>>a2>>n;
	int m = a1 + (a2 - a1) * (n -1);
	cout << m << endl;
}
