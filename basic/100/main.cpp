#include <iostream>
using namespace std;
int main(){
    int sum=0;
    int n;
    for(int i=1;i<=5;i++){
        cin>>n;
        sum+=n;
        if(sum>21){
            cout<<"Bomb"<<endl;
            return 0;
        }
        if(sum>=16){
            break;
        }
    }
    cout<<sum<<endl;
}
