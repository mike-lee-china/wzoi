#include <iostream>
using namespace std;

void print_n(int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j < i; j++)
        {
            cout << i - j;
        }
        cout<<endl;
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= n - i; j++)
        {
            cout<<j;
        }
        for (int j = 1; j < n - i; j++)
        {
            cout<< n - i - j;
        }
        cout<<endl;
    }
}

int main(int, char**){
    int n = 6;
    while (cin>>n)
    {
        print_n(n);
    }
    return 0;
}
