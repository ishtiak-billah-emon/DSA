#include <bits/stdc++.h>
using namespace std;

#define lln long long int
#define ld long double
#define ll long long
#define endl "\n";
#define sc(n) scanf("%d",&n);
#define scl(n) scanf("%lld",&n);
#define scd(n) scanf("%lf",&n);
#define pf(res) printf("%d\n",res);
#define pfl(res) printf("%lld\n",res);
#define pfd(res) printf("%lf\n",res);
#define f(i,a,b) for(int i=a; i <= b;i++)
#define F(i,a,b) for(int i=a; i < b;i++)
const ll mod = 1e9+7;
const ld pi = 3.14159265358979323846;


void solve() {

}

//Bruteforce will give TLE 


int main() {
ios_base::sync_with_stdio(0);
cin.tie(0); cout.tie(0);

            // int a = 5;
            // int b = 6;
            // cout<<"and"<< " "<<(a & b)<<endl;
            // cout<<"xor"<<" "<< (a^ b);

   ll t,CT=0;
   cin>>t;

   while(t--)
   {
     //   cout << "Case #" << ++CT << ": ";

        ll n;
        cin>>n;

        ll a[n];
        ll even[n]={0};
        ll odd[n]={0};
        int e =0;
        int o =0;

        for(int i = 0; i<n;i++)
        {
            cin>>a[i];
        }
          
        int count = 0;


        for(int i = 0; i<n-1;i++)
        {
            for(int j = i+1;j<n;j++)
            {
                if((a[i] & a[j])>=( a[i] ^ a[j]) )
                {
                    count++;
                }
            }
        }

            
                 cout<<count<<endl;
        }
       
      

   }
   



