#include<bits/stdc++.h>
using namespace std;


vector < int > bruteforce(int a[], int b[] ,int n, int m)
{
    vector < int > v;

    for(int i = 0 ; i<n;i++)
    {
        for (int j = 0; j < m; j++)
        {
           if(a[i] == b[j])
           {
                if(v.size() == 0 || v.back() != a[i])
                {
                    v.push_back(a[i]);
                }
           }
        }
        
    }
    return v;

 
}

int main()
{
    int n,m; cin>>n;
    int a[n];
    for(int i = 0; i<n;i++)
    {
        cin>>a[i];
    }

    cin>>m;
    int b[m];

    for(int i = 0; i<m;i++)
    {
        cin>>b[i];
    }
   
   vector < int > ans = bruteforce( a, b,n,m);


   for(auto e : ans)
   {
        cout<<e<<" ";
   }


}