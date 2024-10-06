#include<iostream>
using namespace std;

int main() {
    long long n, sum;
    cin >> n;

    sum = (n * (2 + (n - 1))) / 2;  // Sum of n terms = n/2(2a+(n-1)d)
    cout << sum << endl;            // nth term = a+(n-1)d

    return 0;
}