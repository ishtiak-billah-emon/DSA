#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;	cin >> n >> k;
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
    }

    while(k--){
    	int x; cin >> x;

		int l = 1, r = n, ans = n + 1;
    	while(l <= r){
    		int mid = (l + r) / 2;
    		if(a[mid] >= x) {

    			ans = mid;
    			r = mid - 1;
    		}else{
    			l = mid + 1;
    		}
    	}

    	cout << ans << '\n';
    	
    }
   



    return 0;
}		