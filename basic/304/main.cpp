#include <iostream>
using namespace std;

int char2i(char c) {
	if(c <= '9') {
		return 0 + c - '0';
	}

	return 10 + c - 'a';
}

int main(int argc, char** argv) {
	char c;
	long long n = 0;
	string s;
	cin>>s;

	for(int i=0; i< s.size(); i++) {
		int m = char2i(s[i]);
		n = n*16 + m;
	}

	cout<<n<<endl;
	return 0;
}

