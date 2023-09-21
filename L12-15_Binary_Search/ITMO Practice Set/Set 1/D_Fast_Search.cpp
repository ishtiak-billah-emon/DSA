#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int a[N];
int n;

int solve(int x ) {

	int l = 1, r = n, ans = 0;
	while(l <= r) {
		int mid = (l + r) / 2;
		if(a[mid] <= x){
			ans = mid;
			l = mid + 1;
		}else{
			r = mid - 1;
		}
	}
	return ans;
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n;
    for(int i = 1; i <= n; i++) {
    	cin >> a[i];
    }

    sort(a + 1, a + n + 1);
    int q;	cin >> q;

    while(q--) {

    	int l, r;	cin >> l >> r;

    /*	Solution - 1
    	auto ub = upper_bound(a + 1, a + n + 1, r);
    	auto lb = lower_bound(a + 1, a + n + 1, l);

    	cout << ub - lb << ' ';

    */

    // solution 2
    cout << solve(r) - solve(l -1) << ' ';



    }

    return 0;
}		