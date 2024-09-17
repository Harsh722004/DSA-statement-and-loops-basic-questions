#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;

    if (a < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    int factorial = 1;
    for (int i = 1; i <= a; ++i) {
        factorial *= i;
    }

    cout << "Factorial of " << a << " is " << factorial << endl;

    return 0;
}
