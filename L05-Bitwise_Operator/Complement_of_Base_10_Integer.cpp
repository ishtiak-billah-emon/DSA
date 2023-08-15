#include<bits/stdc++.h>
using namespace std;

int complement(int n)
{
        int dec =0;
        int i =0;

        if(n== 0)
        {
            return 1;
        }

        while(n!=0)
        {
            int bit = n & 1;
            int x = bit ^ 1;
            dec+= x * pow(2,i);
            n =n>>1;
            ++i;
            
        }

        return dec;

   
    
}
int main()
{
    int n;
    cin>>n;

    cout<<complement(n)<<endl;

   


}