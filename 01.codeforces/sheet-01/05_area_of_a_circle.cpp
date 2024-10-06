#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double r, area;
    const double pi = 3.141592653;

    cin >> r;
    area = pi * (r * r);
    cout << fixed << setprecision(9) << area << endl;

    return 0;
}