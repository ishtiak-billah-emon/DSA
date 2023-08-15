/*
    initialize / Fill an entire array with a number.
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    int x = -1; // the number
    
    // function 

    fill_n(a,5,x); // array _  Size _ the number that will be stored in the entire array

   // Printing array

    for (int  i = 0; i < 5; i++)
    {
        cout<<a[i]<<" ";
    }cout<<"\n";
    
}