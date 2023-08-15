#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a []={1,7,2,2,3,1,3};
    int n = sizeof(a)/sizeof(int);

    /*
        Better approach is using XOR 
        * Xor of two same number is  0
        * Xor all the elements 
        * The remaining number is our ans;
        * https://github.com/ishtiak-billah-emon/DSA/blob/master/L05-Bitwise_Operator/Find_a_uniqueNumber_XOR.cpp
    */
      // Process 1:
     //    1) If duplicate found , replaced both of them with -1;
    //   T.c = O(n^2)

    for(int i = 0 ; i< n-1 ; i++)
    {
        for(int j = i + 1 ; j<n;j++)
        {
            if((a[i]== a[j]))
            {
                a[i] = a[j]= -1 ;
            }
        }
    }

    for(int i = 0 ; i< n ;i++)
    {
        if(a[i]!= -1 )
        {
            cout<<a[i]<<endl;
        }
    } 
}