#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int x, y;
	cin>>x>>y;
	printf("%*d\n",y,x);
	printf("%0*d\n",y,x);
	printf("%-*d\n",y,x);
	return 0;
}
