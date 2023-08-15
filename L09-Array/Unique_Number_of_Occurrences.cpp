// Leet Code 1207
#include<bits/stdc++.h>
using namespace std;
const int N = 2005;
int freq[N];

int main()
{
    int a[]={-3,0,1,-3,1,1,1,-3,10,0};
    int sz= sizeof(a)/sizeof(int);

    for(int i = 0; i< sz ; i++ )
    {
        freq[a[i]+1000]++;
    }

   int var = 1;
    for(int i= 0 ; i<N-1;i++)
    {
        if((freq[i]!=0))
        {
            for(int j = i+1;j<N;j++)
            {
                if(freq[i]==  freq[j])
                {
                  var = -1;
                   
                }
            }
        }
    }

  cout<<var<<endl;


}
