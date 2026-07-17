#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string s;
    if (!getline(cin, s)) return 0;
    int v = 0, c = 0;
    for (char ch : s) {
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                v++;
            } else {
                c++;
            }
        }
    }
    cout << "Vowels: " << v << "\nConsonants: " << c;
    return 0;
}
