// // Given an array of n integers, find the sum of Ai  * Aj for all 1 ≤ i < j ≤n.

#include <bits/stdc++.h>
using namespace std;

void Suffix_sumFunc(int a[],int n){

	int suffix_sum[ n + 2]; // it will access n + 1 elements so we need to declare n + 2 to avoid runtime error

	suffix_sum[n + 1] = 0;
	for(int i = n; i >= 1; i--){
		suffix_sum[i] = suffix_sum[i + 1] + a[i];
	}
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += a[i] * suffix_sum[i + 1];
	}
	
	cout << sum << '\n';
}

void Prefix_sum(int a[],int n){

	int pf[n + 1];
    pf[0] = 0;

    for(int i = 1; i <= n; i++){
    	pf[i] = pf[i - 1] + a[i];
    }

    int sum = 0;

    for(int i = 1; i <= n ; i++){

    	sum += a[i] * (pf[n] - pf[i]);
    }

    cout << sum << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
    }

  // Prefix_sum(a,n);
    Suffix_sumFunc(a,n);

   



    return 0;
}		