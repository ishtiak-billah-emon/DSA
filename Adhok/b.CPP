#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
int prefix_sum[N];

void solve(int a[], int n){
    prefix_sum[0] = a[0];
    for(int i = 1; i < n; i++){
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    solve(a,n);

    int q; cin >> q;
    while(q--){
        int l , r;  cin >> l >> r;
        int ans = prefix_sum[r] - prefix_sum[l - 1];
        cout << ans << '\n';  
    }

    return 0;
}		