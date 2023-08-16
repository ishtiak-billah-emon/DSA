#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t; cin >> s >> t;

    int size = s.size();

    if( s == t) {
    	cout << 0 << '\n';
    	return 0;
    }

    int count = 0;
    for(int i = 0; i < size; i++) {
    	if(s[i] != t[i]) {
    		count++;
    	}
    }

    cout << count << '\n';

    return 0;
}		