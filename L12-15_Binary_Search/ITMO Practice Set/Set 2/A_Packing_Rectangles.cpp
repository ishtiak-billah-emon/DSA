#include <bits/stdc++.h>
using namespace std;

#define int long long
int w, h, n; 
const int rMax = 1e14;

bool solve(int length) {

    int a = length / w;
    int b = length / h;
    if(a == 0 || b == 0) {
        return false;
    }

    return  a >= (double)(n * 1.0 / b * 1.0);
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cin >> w >> h >> n;

    int l = 1, r = rMax, ans = 0;
    while(l <= r) {
        int mid = l + (r - l) / 2;

        if(solve(mid)) {
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    cout << ans << '\n';

    return 0;
}	