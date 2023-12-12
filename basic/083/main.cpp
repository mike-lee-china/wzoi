#include <iostream>
using namespace std;

int main(int, char**){
    double high;
    cin>>high;
    if (high < 1.2) {
        cout<<"free"<<endl;
        return 0;
    }
    if (high > 1.5) {
        cout<<"full ticket"<<endl;
        return 0;
    }
    cout<<"half-price ticket"<<endl;
    return 0;
}
