#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string res="";
    for(int i=0;i<s.length();){
        char ch=s[i++];
        string num="";
        while(i<s.length()&&isdigit(s[i])num+=s[i++];
        int cnt=num==""?cnt=1:cnt=stoi(num);
        res.append(cnt,ch);
    }
    cout<<res;
}
