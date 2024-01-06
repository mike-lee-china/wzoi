#include <iostream>
using namespace std;

int main(int, char**){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < 2 * (n - i) + 1; j++)
        {
            cout<<"Y";
        }
        cout<<endl;
    }
    return 0;
}
