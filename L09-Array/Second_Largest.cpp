// https://www.codingninjas.com/codestudio/problems/second-largest-element-in-the-array_873375?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube

#include<bits/stdc++.h>
using namespace std;

void bruteforce()
{  
    // Time Complexity O(N logN ) + O(N);

    int n;cin>>n;
    
    int ar[n];

    for(int i = 0 ;i<n;i++)
    {
        cin>>ar[i];
    }

    sort(ar,ar+n); // nlogn


    int largest = ar[n-1];
    int second_largest = -1;

    // this loop will run for O(N)

    for(int i = n-2 ; i>-0; i--)
    {
        if( ar[i] != largest )
        {
            second_largest = ar[i];
            break;
        }
    }

    cout<<second_largest<<endl;

    
}

void better()
{   // O(N)..... but this taking O(N)+O(N) so can say O(2N) more specificly.

    int n;cin>>n;
    
    int a[n];

    for(int i = 0 ;i<n;i++)
    {
        cin>>a[i];
    }

    int largest = a[0];

    for(int i = 1 ;i<n;i++)
    {
        if(a[i]> largest)
        {
            largest = a[i];
        }
    }

    int second_largest = -1;

    for(int i = 0 ;i<n;i++)
    {
        if(a[i] > second_largest && a[i]!=largest)
        {
            second_largest = a[i];
        }
    }

    cout<<second_largest<<endl;
}

void optimal()
{
    // O(N)

    int n;cin>>n;
    
    int arr[n];

    for(int i = 0 ;i<n;i++)
    {
        cin>>arr[i];
    }

     int largest = arr[0];
    int second_largest = -1;

    for(int i = 1; i<n;i++)
    {
            if(arr[i] > largest)
            {
                second_largest = largest;
                largest = arr[i];
            }

            else if(  (arr[i] < largest) && ( arr[i] > second_largest) )
            {
                  second_largest = arr[i];
            }
    }

    cout<<second_largest<<endl;

}

int main()
{
    int test_case; cin>>test_case;

    while(test_case--)
    {
       // bruteforce();
     //   better();
        optimal();
        
    }
   

        
}