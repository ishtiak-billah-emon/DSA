/*  
    Given N strings and Q queries.
    In each qurey you are given a string print 
    frequency of the string.
    
    N <= 10^6
    |S| <=100;
    Q<= 10^6
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map < string , int > m;

        int n; cin>>n;

        for(int i = 0 ; i< n;i++)
        {
            string s; cin>>s;
            m[s]++;

        }

        int q; cin>>q;
        
        while(q--)
        {
            string st; cin>>st;

            cout<<m[st]<<endl;
        }
    
}