#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 7;
    int a[n]={1,2,3,4,5,6,7};

    // way 1
    
    for(int i = 0; i< n/2; i++)
    {
            swap(a[i],a[n-i-1]);
    }


    /* Dry run for n = 7 (odd)
         n/2 = 3

        0 1 2 
        index:
         ----------------------------
        | 0 | 1 | 2 | 3 | 4 | 5 | 6 |       
        -----------------------------
        swap ( 0 , 6)
        swap ( 1 , 5)
        swap ( 2 , 4)
        3 will be at his position.no change;

        Dry run for n = 8 (even size)

        n/2 = 4
        0 1 2 3
        index:
        ----------------------------------
        | 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 |       
        ---------------------------------
        swap( 0 , 7)
        swap( 1 , 6)
        swap( 2 , 5)
        swap( 3 , 4)
    */

   // way 2

   int start = 0;
   int end = n-1 ; 

   while( start <= end)
   {
        swap(a[start],a[end]);
        start ++;
        end --;
   }
   
   // printing array elements
    for(int i = 0; i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}