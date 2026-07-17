#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    int original = n;
    int sum = 0;
    int digits = to_string(n).length();
    while (n > 0) {
        int remainder = n % 10;
        sum += round(pow(remainder, digits));
        n /= 10;
    }
    if (sum == original) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
