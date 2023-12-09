#include <iostream>
using namespace std;

int main(int, char**){
    int a;
    cin>>a;
    int b = a/100;
    int c = a%10;
    cout<< c * 100 + (a - b*100 - c) + b << endl;
}
