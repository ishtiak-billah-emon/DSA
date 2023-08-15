// https://leetcode.com/problems/peak-index-in-a-mountain-array/

#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr, int n) {


    int low = 0 , high = n - 1;
    int mid = low + (high -  low )/2;

    while(low <= high)
    {
        if( arr[mid] > arr[mid + 1] )
        {
            if( arr[mid] > arr[mid -1 ] )
            {
                return mid;
              
            }
            else{
                high = mid ;
            }
        }

        else
        {
            low = mid;
        }

        mid  = low + (high -low)/2;
        
    }

return -1;

}



int main()
{
    int n; cin>>n;

    vector < int > v;

    for(int i = 0; i<n;i++)
    {
        int x ;  cin>>x;

        v.push_back(x);
    }


    int index = peakIndexInMountainArray( v , n);
    cout<<index<<endl;

}