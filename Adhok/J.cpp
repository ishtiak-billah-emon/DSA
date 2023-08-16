#include <bits/stdc++.h>
using namespace std;

const int N = 27;
int freq[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;	cin >> s;

    for(int i = 0; i < s.size(); i++) {

    	freq[s[i] - 96]++;
    }

    int index = -1;
    for(int i = 1; i <= 26; i++) {
    	if( freq[i] == 0){
    		index = i;
    		break;
    	}
    }


    if(index == -1) {
    	cout << "None\n";
    	return 0;
    }
 
 	cout << char(index + 96) << '\n';


    return 0;
}		

