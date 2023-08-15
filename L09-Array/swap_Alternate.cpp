#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 8;
    int a[] ={ 1,2,3,4,5,6,7,8};
    
    // swapping 

    for(int i = 0; i< n-1; i+=2)
    {
        swap(a[i],a[i+1]);
    }
    
    // Printing 
    for(int i =0 ; i<n;i++)
    {
        cout<<a[i]<<" ";
    }


// swap function breakdown
/* 
    int a  = 5; 
    int b = 6;

    int temp = b;
    b= a;
    a= temp;
    cout<<a<<" "<<b; */

}