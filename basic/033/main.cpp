#include<iostream>
using namespace std;

int main(int argc, char** argv){
	int a;
	cin >> a;
	a = a * 1000 + a;
	a = a / 7 / 11 / 13;
	cout << a << endl;
	return 0;
}
