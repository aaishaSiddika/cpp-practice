#include<iostream>
using namespace std;

int main() {
    long long x, firstDigit;
    cin >> x;

    // Mathematical approach (better)
    while(x != 0) {
        firstDigit = x;
        x /= 10;
    }

    if(firstDigit % 2 == 0) {
        cout << "EVEN" << endl;
    } else {
        cout << "ODD" << endl;
    }

    // String approach
    // string x;
    // cin >> x;

    // int firstDigit = x[0] - '0';

    // if(firstDigit % 2 == 0) {
    //     cout << "EVEN" << endl;
    // } else {
    //     cout << "ODD" << endl;
    // }

    return 0;
}