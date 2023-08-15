// Set a bit 
// Unset a bit
#include<iostream>
#include<math.h>
using namespace std;

int Set_ith_bit(int &n,int i)
{
    n = n | (1 << i);
    return n;
    
}

int Unset_ith_bit(int &n ,int i)
{
    n = n & ~(1<<i);
    return n;
}

void print(int n)
{
    int ans =0, i =0;

    while(n!=0)
    {
        int bit = n&1;
        ans  = (bit * pow(10,i))+ans;
        i++;
        n=n>>1;      
    }
    cout<<ans<<endl;
}

int main()
{
    int n,i;
    cin>>n>>i;
    print(n);

  //  Set_ith_bit(n,i);

      Unset_ith_bit(n,i);

    print(n);
}