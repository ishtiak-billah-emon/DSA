#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
long long int n,  t;
long long int a[N];
const long long int tMax = 1e9;


long long int  f(long long int mid){

	long long int products = 0;
	for(int i = 1; i <= n; i++ ){
		products += min(( mid / a[i] ), tMax);
	}

	return products;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> t;
    for(int i = 1; i <= n; i++) {
    	cin >> a[i];
    }

    long long l = 1, r = 1e18  ;
    long long ans = -1;
    while( l <= r) {
    	long long int  mid = l + (( r - l ) / 2 );

    	long long int sum = f(mid);
    	if(sum >= t){
    		ans = mid;
    		r = mid - 1;

    	}
    	else{
    		l = mid + 1;
    	}

    }

    cout << ans << '\n';

    return 0;
}		