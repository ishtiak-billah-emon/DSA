#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int n,int element)
{
    int L = 0 , R = n-1 ;
    int mid = L + (R-L)/2;

    while( L <= R)
    {
        if( a[mid] == element )
        {
            return mid;
        }
       else if( a[mid] < element)
        {
            L = mid + 1;
        }
        else{

            R = mid - 1;
        }

        mid = L + ( R - L )/2;
    }

    return -1;
}

int main()
{
    int n ; cin>>n;
    int target; cin>>target;

    int a[n];

    for(int i = 0; i<n;i++)
    {
        cin>>a[i];
    }

   cout<<binarySearch(a,n,target) <<"\n";
}