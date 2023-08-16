#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int ans = 0;

    for(int i = 1; i <= n; i++){
        ans ^= a[i];
    }
    cout << ans << '\n';

    return 0;
}     