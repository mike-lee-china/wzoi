#include <iostream>
using namespace std;
int main(int, char**){
    int a;
    cin>>a;
    if (a%3 == 0 && a%5 == 0) {
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;
    return 0;
}
