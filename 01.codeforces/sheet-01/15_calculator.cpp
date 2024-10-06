#include<iostream>
using namespace std;

int main() {
    long long a, b;
    char oper;
    cin >> a >> oper >> b;

    switch (oper) {
    case '+':
        cout << a + b << endl;
        break;
    case '-':
        cout << a - b << endl;
        break;
    case '*':
        cout << a * b << endl;
        break;
    case '/':
        cout << a / b << endl;
        break;
    }

    return 0;
}