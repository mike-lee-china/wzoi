#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int d = 0; 
    int max = 0;

    for (int i = 1; i <= 7; i++) {
        int a,b;
        cin>>a>>b;
        if (a + b > max) {
            d = i;
            max = a + b;
        }
    }

    if (max <= 8) {
        d = 0;
    }

    cout << d << endl;
    return 0;
}