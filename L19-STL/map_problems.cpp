/*   problem 1
    Given N strings, Print unique strings in lexiographical order with their
    frequency

    N <= 10^5
    |S| <=1000;
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map < string ,int > freq;
    int N; cin>>N;
    
    while(N--)
    {
        string s; cin>>s;
        freq[s]++;
    }

    for(auto &val : freq)
    {
        cout<<val.first<<" "<<val.second<<endl;
    }
}

// problem 2
// problem 4c codeforces
         /*  map < string , int > freq;
             int t;
             cin>>t;
             while(t--)
             {  
                string s; cin>>s;

                if(freq[s]==0)
                {
                    cout<<"OK"<<"\n";
                }else
                {
                    cout<<s<<freq[s]<<"\n";
                }
                freq[s]++;
             }
             */