#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n] ={0};
    for(int i = 0 ; i<n;i++ )
    {
        cin>>a[i];
    }

    int k; cin>>k;

  
    while (k--)
    {

      int temp = a[0];

       for(int j = 1 ;j<n;j++ )
       {
          a[j-1] = a[j];
       }

       a[n-1]= temp;
       
     }
      


      
      for(int i= 0 ; i<n;i++)
      {
        cout<<a[i]<<" ";
      }
    
      
    }

