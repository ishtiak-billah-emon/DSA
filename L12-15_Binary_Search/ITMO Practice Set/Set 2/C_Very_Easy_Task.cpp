#include <bits/stdc++.h>
using namespace std;

int required_copies, x, y;
const int maxTime = 2e9 + 9;

bool solve(int time){

	if(x > y){

		swap(x,y);
	}
	long long total_copies = 0;
	
    if (x <= time) {
    total_copies = 1;
    time -= x;
    total_copies += time / x;
    total_copies += time / y;
  };

	return total_copies >= required_copies;


	
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> required_copies >> x >> y;
    int l = 0, r = maxTime, ans = 0;

    while(l <= r) {

    	int mid = l + (r - l) / 2;

    	if(solve(mid)){

    		ans = mid;
    		r = mid - 1;

    	}else{

    		l = mid + 1;
    	}
    }

  	cout << ans << '\n';


    return 0;
}		