
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Write Your Code here...
      float num1, num2;
    cin >> num1 >> num2;

    // Multiplication
    cout << fixed << setprecision(2);
    cout << num1 * num2 << endl;

    // Division
    if (num2 != 0) {
        cout << num1 / num2 << endl;
    } else {
        cout << "Undefined" << endl;
    }
    return 0;
}
