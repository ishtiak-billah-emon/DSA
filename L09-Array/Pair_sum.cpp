// https://bit.ly/3EwlU6e 

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,s;
    cin>>n>>s;

    int arr[n];

    for(int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }

    sort( arr , arr+n);

    for(int i = 0 ; i<n-1;i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            
            if(( arr[i]  + arr[j]) == s)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;    

            }

            else if ((arr[i] + arr[j]) > s)
            {
                break;
            }
        }
    }
}