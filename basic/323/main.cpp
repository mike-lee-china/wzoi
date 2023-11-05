#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n;
	cin>>n;
	string* buf = new string[n];

	for(int i = 0; i < n; i++) {
		cin>>buf[i];
	}

	int c = 0;
	int m;
	cin>>m;
	int* b2 = new int[m];
	
	for(int i=0;i<m;i++) {
		cin>>b2[i];
	}

	for(int i=0; i< m; i++) {
		int x = b2[i] - 1;
		if (buf[x].empty()) {
			continue;
		}
		c++;
		cout<<buf[x]<<endl;
		buf[x].clear();
	}

	cout<<c<<endl;
	delete [] buf;
	buf = NULL;
	delete [] b2;
	b2 = NULL;
	
	return 0;
}
