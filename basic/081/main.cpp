#include <cstdio>
#include <iostream>
using namespace std;

int main(int, char**){
    double len, time;
    cin>>len>>time;
    double price = 11.0;
    price += (int)time/3;
    if (len <= 2) {
        price += 0;
    } else if (len <= 10) {
        price += (len - 2) * 1.8;
    } else {
        price += 8 * 1.8 + (len - 10) * 1.8 * 1.5;
    }
    printf("%.1f\n",price);
    return 0;    
}
