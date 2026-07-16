#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin>>s;
	int flag=0;
	for(int i=0;i<s.length();i++){
	    flag=flag|(1<<s[i]-'0');
	    if(flag>=(1<<10)-1){
	        cout<<"yes";return 0;
	    }
	}
	cout<<"no";
}
