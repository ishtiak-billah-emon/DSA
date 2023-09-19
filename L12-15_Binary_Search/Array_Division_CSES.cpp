#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int n, k, a[N];


bool f(long long x) {
	int number_of_subarray = 1;

	for(int i = 1; i <= n; i++) {

		if(a[i] > x )return false;	
	}

	long long current_sum = a[1];

	for(int i = 2; i <= n; i++) {
		
		if(current_sum + a[i] <= x){

			current_sum += a[i];

		}else{

			current_sum = a[i];

			number_of_subarray++;
		}

	}

	return number_of_subarray <= k;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++) {
    	cin >> a[i];
    }

    long long int low = 0 , high = 2e14, ans = 0;

    while( low <= high) {

    	long long mid = (high + low) / 2;

    	if(f(mid)){

    		ans = mid;
    		high = mid - 1;

    	}else{
    		
    		low = mid + 1;
    	}
    }


    cout << ans << '\n';



    return 0;
}		