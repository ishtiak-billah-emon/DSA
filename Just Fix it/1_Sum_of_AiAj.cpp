// Given an array of n integers, find the sum of Ai  * Aj for all 1 ≤ i, j ≤n.

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n; cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
    }

    int i = 1 , j = 1;
    int sum = 0;
    // -------------------------------inital ans O(n^2)------------------------------------
    while( i <= n){
    	cout<< "i = " << i << " J = " << j <<endl;
    	sum += a[i] * a[j];
    	j++;
    	if( j > n){
    		i++;
    		j = 1;
    	}

    }
    // --------------------------------- another ans O(n)--------------------------------------------
    
    // int total_sum = 0;
    // for(int i = 1; i <=n; i++){
    // 	total_sum += a[i];
    // }

    // for(int i  = 1; i <= n; i++){
    // 	sum += a[i] * total_sum;
    // }

//    cout<<sum<<'\n';



    return 0;
}		