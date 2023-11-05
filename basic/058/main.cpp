#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char** argv) {
	char c1,c2,c3;
	int a1,a2,a3;
	cin>>c1>>c2>>c3>>a1>>a2>>a3;
	c1 += pow(2,a1);
	c2 += pow(2,a2);
	c3 += pow(2,a3);
	cout<<c1<<" "<<c2<<" "<<c3<<endl;
	return 0;
}
