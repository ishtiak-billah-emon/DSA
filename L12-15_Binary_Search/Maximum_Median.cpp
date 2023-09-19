#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
int a[N];
int n, k;
const int high = 2e9;

bool f(int x){
	int median = (1 + n) / 2;

	long long min_operations = 0;

	for(int i = median; i <= n; i++ ) {

		if(a[i] < x ){

			min_operations += x - a[i];
		}
		 
	}

	return min_operations <= k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
    }

    sort(a + 1, a + n + 1);
  

// f(x) = 1 1 1 1 1 0 0 0 0... monotonic function
	
	// int ans = 0, x = 0;
   /* while(f(x)){ // 2e9 possible maximum (worst case)

    	ans = x;
    	x++;
    }*/

    int l = 0, r = high , ans = 0;
    while(l <= r) {
    	int mid = l + (r - l) / 2;

    	 if( f(mid) == true) {

    	 	ans = mid;
    	 	l  = mid + 1;
    	 }
    	 else{
    	 	r = mid - 1;
    	 }
    }

	cout << ans << '\n';

    return 0;
}		