#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	string s;
	cin>>s;

	char c=s[0];
	int n=1;

	for(int i = 1; i<=s.length();i++) {
		char t = s[i];
		if(t == c) {
			n++;
			continue;
		}
		cout<<n<<c;
		c=t;
		n=1;
	}
	cout<<endl;
	return 0;
}
