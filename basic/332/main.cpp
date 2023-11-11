#include <algorithm>
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	string s;
	cin>>s;

	int n = 1;

	for (int i = 0, j = 1; j <= s.size(); i++, j++) {
		if (s[i] == s[j]) {
			n++;
			continue;
		}
		cout<<n<<s[i];
		n = 1;
	}

	cout << endl;
	return 0;
}
