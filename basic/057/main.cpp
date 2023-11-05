#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	double x;
	int y;
	cin>>x>>y;
	printf("%*.3lf\n",y,x);	
	printf("%0*.3lf\n",y,x);
	printf("%-*.3lf\n",y,x);
	return 0;
}
