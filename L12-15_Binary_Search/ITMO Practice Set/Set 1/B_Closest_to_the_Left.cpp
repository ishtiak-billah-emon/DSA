#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int a[N];



// int findindex(int x) {
// 	int l = 1, r = x;
// 	while(l <= r){
// 		int mid = (l + r) / 2;
// 		if(a[mid] == x){
// 			return true;
// 		}else if( a[mid] > x){
// 			r = mid - 1;
// 		}else{
// 			l = mid + 1;
// 		}
// 	}

// 	return false;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;	cin >> n >> k;
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
    }

    while(k--){
    	int element;  cin >> element;

 /*   	if( findindex(element)){
    		 auto it = lower_bound(a + 1, a + n + 1, element);
    		 cout << it - a << '\n';
    		 
    	}else{

    		 auto it = lower_bound(a + 1, a + n + 1, element);
    		 cout << it - 1 - a << '\n';

    	}
    
*/
    	int l = 1, r = n, ans = 0;
    	while(l <= r){
    		int mid = (l + r) / 2;
    		if(a[mid] <= element) {

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