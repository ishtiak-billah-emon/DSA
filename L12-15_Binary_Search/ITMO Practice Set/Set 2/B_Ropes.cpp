#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 9;
const double length_Max = 1e7 + 9; 
int ropes[N], n, k;

bool solve(double x) {

	int piece_count = 0;

	for(int i = 1; i <= n; i++) {

		piece_count += floor(ropes[i] / x );

		if(piece_count >= k){
			return true;
		}
	}

	return false;
}

int32_t main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
    	cin >> ropes[i];
    }

    double l = 0,  r = length_Max, ans = 0;

    while(r - l > 1e-7) {

    	double mid = (l + r) / 2;

    	if(solve(mid)){

    		ans = mid;
    		l = mid;

    	}else{

    		r = mid ; 
    	}
    }
   cout << fixed << setprecision(10) << ans << '\n';
  

    return 0;
}		