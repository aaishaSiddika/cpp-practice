#include<iostream>
using namespace std;

int main() {
    long long n, m, a, b;
    cin >> n >> m;

    a = n % 10;
    b = m % 10;

    cout << a + b << endl;

    return 0;
}