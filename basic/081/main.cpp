#include <cstdio>
#include <iostream>
using namespace std;

int main(int, char**) {
    double len, time;
    cin>>len>>time;
    double price = 11.0;
    price += time/3;
    do {
        if (len <= 2) {
            break;
        } 
        if (len <= 10) {
            price += (len - 2) * 1.8;
            break;
        } 
        
        price += 8 * 1.8 + (len - 10) * 1.8 * 1.5;
    }while(0);
    printf("%.1f\n", price);
    return 0;
}
