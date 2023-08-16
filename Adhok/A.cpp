#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k; cin >> n >> k;
    int count = 0;
    while(n--){

    	int number; cin >> number;

    	if( number %k == 0){
    		count++;
    	}
    }
    cout << count << '\n';
   
    return 0;
}		