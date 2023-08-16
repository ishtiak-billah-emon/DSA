#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;	cin >> n;
   	string s;	cin >> s;

   	int count = 0;
   	for(int i = 0; i <= n; i++) {
   		if( (i + 2) < n){
   			if(s[i]=='A' and s[i + 1] == 'B' and s[i + 2] == 'C') {
   				count++;
   			}
   		}
   	}

   	cout << count << '\n';
    return 0;
}		