#include<bits/stdc++.h>
using namespace std;

void solve(int n)
{

}

int main()
{
    int t,n;
    cin>>t; 
  

    while(t--)
    {
      
        cin>>n;

        int arr[n];



        for(int i = 0; i<n;i++)
        {
            cin>>arr[i];
        }
          int x = arr[0];

        for(int i = 1; i<n;i++)
        {
           x = x & arr[i];
        }
        cout<<x<<endl;
        
    



    }


    
}