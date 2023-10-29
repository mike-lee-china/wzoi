#include <iostream>
using namespace std;

int main(){
	double x,s;
	int score,n;
	cin>>x>>score>>n;
	s = x * n;
	s -= score;
	s /= (n-1);
	printf("%0.3lf",s);
	return 0;
}
