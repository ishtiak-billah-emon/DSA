//Question:
// https://bit.ly/3Il0c7n

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int a[n];
    int b[m];





    for(int i = 0; i< n;i++)
    {
        cin>>a[i];

    }

    for(int i = 0 ;i< m;i++)
    {
        cin>>b[i];

    }


    int i = 0; int j =0;

      vector<int>ans;

    while(i<n && j<m)
    {
        if(a[i] == b[j])
        {
            ans.push_back(a[i]);
            i++; j++;
        }

        else if( a[i] < b[j])
        {
            i++;
        }
        else{
            j++;
        }
    }

    for(auto  val :ans)
    {

        cout<<val<<" " ;
    }




}
