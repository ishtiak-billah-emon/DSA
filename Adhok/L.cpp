#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long a, b ;    cin >> a >> b;
    int count = 0;

    for(long long i = a; i <= b ; i *= 2) {

        count ++;
          
    }

    cout << count << '\n';
    
    return 0;
}       