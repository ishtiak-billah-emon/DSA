#include <bits/stdc++.h>
using namespace std;

bool is_possible(int mid, int n, int m,vector<int> arr) {
    
    for(int i = 0; i < n; i++){
        if(arr[i] > mid){
            return false;
        }
    } 

    if(n < m ) {
        return false;
    }
    
    int current_page = 0;
    int min_student_count = 1;

    for(int i = 0; i < n; i++) {

        if(current_page + arr[i] <= mid) {

            current_page += arr[i];

        }else{

            min_student_count ++;
            current_page = arr[i];
        }
    }

    return min_student_count <= m;
  
}

int findPages(vector<int>& arr, int n, int m) {
    
    int l = 0; 
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    long long int r = sum;

    long long int  mid = l + (r - l) / 2;
    int ans = -1;
    while(l <= r) {
        if(is_possible(mid,n,m,arr)) {
          
            ans = mid;
            //cout << ans << ' ' << mid << '\n';
            r = mid - 1;
        }else{
            l = mid + 1;
        }

         mid = (r + l ) / 2; 
    }

    return ans;
}


int main(){

    vector<int>arr;
    int n,  m;
    cin >> n >> m;

    int element;

    for(int i = 0; i < n; i++){
        cin >> element;
        arr.push_back(element);
    }

    int ans = findPages(arr,n,m) ;
    cout << ans << '\n';



}