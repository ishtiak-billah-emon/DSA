//Question: https://bit.ly/3dm6bdZ 
#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int n)
{   // using Xor operation
/*
    *At first xor of all the operation will give a value x;
    *If we do xor of (1 -> n-1) it will give a value y
    *If we xor x ^ y we will get our desired ans;

        -------------------------
        | 3 | 1 | 2 | 3 | 4 | 5 |         
        -------------------------- 
        ----------------------
        |  1 | 2 | 3 | 4 | 5 |         
        ----------------------- 

       Look if we xor these two array 1,2,3(2 three),4,5 will be
       gone. 
       Only one 3 will remain

       3^3^3 = 0 ^ 3 = 3. Thats our ans. 

*/
    int ans = 0;
    for(int i = 0 ; i<n;i++)
    {
       ans ^= arr[i];
    }
    
    for(int i = 1 ; i<n;i++)
    {
        ans = ans^i;
    }

    return ans;
   
}
 
/* 
int findDuplicate(int arr[],int n) 
{   
    // O(N)

    sort(arr,arr+ n);

   for(int i = 0; i<n;i++)
   {
        if(arr[i] == arr[i+1])
        {
            return arr[i];
        }
   }
    return 0;
}
*/
int main()
{
    int t;
    cin>>t;

    while(t--)
    {

    
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0 ; i<n;i++)
    {
        cin>>arr[i];
    }

  cout<<"Ans  "<<solve(arr,n)<<endl;;

 // cout<<findDuplicate(arr,n)<<endl;
    }

   

    
}
