#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;	cin >> n;
    int a[n + 1];
    for(int i = 1; i <= n; i++){
    	cin >> a[i];
    }

    int maximum_value = -1;
    for (int i = 1; i <= n; i++){
    	if ( a[i] >= maximum_value) {
    		maximum_value = a[i];
    	}
    }


    int maximum_divisible = -1;
    int current_divisible = 0;
    int gcd_ness = 0;

    for(int i = 2; i <= maximum_value; i++){
    	for(int j = 1; j <= n; j++){

    		if( a[j] % i == 0){
    			current_divisible++;
    		}	
    	}
 
    	if( current_divisible >= maximum_divisible) {
    		maximum_divisible = max ( maximum_divisible, current_divisible);
    		gcd_ness = i;
    	}
    	current_divisible = 0;
    }

    cout << gcd_ness << '\n';



    return 0;
}		