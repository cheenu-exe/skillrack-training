#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string s;
    if (!getline(cin, s)) return 0;
    stringstream ss(s);
    string word;
    vector<string> words;
    while (ss >> word) {
        words.push_back(word);
    }
    for (int i = words.size() - 1; i >= 0; --i) {
        cout << words[i] << (i == 0 ? "" : " ");
    }
    return 0;
}
