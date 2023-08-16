#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 5;
long long prefix_sum[N];
long long sorted_prefix_sun[N];
int n;
int a[N];
int sorted[N];

void solve(){
    
    prefix_sum[0] = 0;
    for(int i = 1; i <= n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    sorted_prefix_sun[0] = 0;
     for(int i = 1; i <= n; i++) {
        sorted_prefix_sun[i] = sorted_prefix_sun[i - 1] + sorted[i];
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
  //  int a[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];

    }

   // int sorted[n + 1];
    for(int i = 1; i <= n; i++) {
        sorted[i] = a[i];
    }

    sort(sorted + 1 , sorted + n + 1);

    solve();

    int q; cin >> q;
    while(q--){
        int type,  l,  r;  cin >> type >> l >> r;
        if(type == 1){

            long long ans = prefix_sum[r] - prefix_sum[l - 1];
            cout << ans << '\n';
        }else{
            long long ans = sorted_prefix_sun[r] - sorted_prefix_sun[l - 1];
            cout << ans << '\n';
        }
    }
    
    return 0;
}       