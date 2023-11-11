#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    double r;
    double R = 2*r;
    double pi = 3.1415926;
    double area_amd = pi * R * R / 8;
    double area_hod = pi * r * r / 4;
    double area_acd = R * R / 2;
    double area_cmd = area_acd - area_amd;
    return 0;
}