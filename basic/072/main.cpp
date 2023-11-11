#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    double r1, r2;
    cin >> r1 >> r2;
    printf("%.2lf\n", 1/(1/r1 + 1/r2));
    return 0;
}