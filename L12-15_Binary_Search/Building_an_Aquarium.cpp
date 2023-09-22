#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
long long   n, water_required, a[N];
const long long  rMax = 2e9 + 9;
#define int long long

bool solve(int height){

	int water_sum = 0;

	for(int i = 1; i <= n; i++){

		if(height > a[i]){

			water_sum += height - a[i];
		}
		
	}

	

	return water_sum <= water_required;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;

    while(t--){

    	cin >> n >> water_required;

    	for(int i = 1; i <= n; i++){

    		cin >> a[i];
    	}

    	int l = 1, r = rMax, ans = 0;

    	while(l <= r){

    		int mid = l + (r - l) / 2;

    		if(solve(mid)){

    			ans = mid;
    			l = mid + 1;
    			
    		}else{

    			r = mid - 1;
    		}
    	}
    	cout << ans << '\n';

    }
    



    return 0;
}		