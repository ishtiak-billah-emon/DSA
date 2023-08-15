#include<bits/stdc++.h>
using namespace std;

int findPivot(int a[],int n)
{
    int low = 0;
    int high = n-1;
    int mid = low + (high - low)/2;

    while (low <= high)
    {
        if( a[mid] > a[mid+1])
        {
                return a[mid + 1] ;

        }
        else 
        {
            high = mid;
        }

        mid = low + (high-low)/2;
    }
    return -1;
    

}
int main()
{
    int n; cin>>n;

    int a[n];

    for(int i = 0 ; i < n ; i++)
    {
        cin>>a[i];
    }

    int pivot = findPivot(a,n);
    cout<<pivot<<endl;
}