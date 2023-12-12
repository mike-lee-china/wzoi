#include <iostream>
using namespace std;
int main(int, char**){
    int usr, pwd;
    cin>>usr>>pwd;
    if (usr != 202201) {
        cout<<"wrong user!"<<endl;
        return 0;
    }

    if (pwd != 123456) {
        cout<<"wrong password!"<<endl;
        return 0;
    }

    cout<<"welcome!"<<endl;
    return 0;
}
