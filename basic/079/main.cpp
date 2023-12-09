#include <iostream>
using namespace std;

int main(int, char**){
    int a, b, c;
    cin>>a>>b>>c;
    if (a%5 == 0 && b%5 == 0 && c%5 == 0) {
        cout<<"Y es."<<endl;
        return 0;
    }
    cout<<"No_"<<endl;
    return 0;
}
