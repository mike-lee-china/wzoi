#include <iostream>
using namespace std;

bool isVaild(int t) {
	if(t>9999) {
		return false;
	}

	int a=t/1000%10;
	int b=t/100%10;
	int c=t/10%10;
	int d=t%10;

	if((d-a-b-c)>0) {
		return true;
	}

	return false;
}

int main() {
	int n = 0;
	int count = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		int t = 0;
		cin >> t;
		if(isVaild(t)) {
			count++;
		}
	}
	cout << count << endl;
	return 0;
}
