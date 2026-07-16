//Type Conversion for INT to BIN,OCT,HEX

#include <bits/stdc++.h>
using namespace std;
#define BASE 2
char s[]="0123456789ABCDEF";
void convo(int v)
{
    if(v==0)return;
    convo(v/BASE);
    cout << s[v%BASE];
}

int main() {
	int n;
	cin >> n;
	convo(n);
}
